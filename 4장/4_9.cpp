#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    string tel;
public:
    string getName() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel) {
        this->name = name; this->tel = tel;
    }
};

int main() {
    Person* p = new Person[3];
    string name, tel;
    cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���"<< endl;
    for (int i = 0; i < 3; i++) {
        cout << "��� " << i + 1 << ">> ";
        cin >> name >> tel;
        p[i].set(name, tel);
    }
    cout << "��� ����� �̸��� ";
    for (int i = 0; i < 3; i++) 
        cout << p[i].getName() <<" ";
    
    cout << endl <<"��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ���>>";
    cin >> name;
    cout << "��ȭ ��ȣ�� ";
    for (int i = 0; i < 3; i++) {
        if (p[i].getName() == name) {
            cout << p[i].getTel() << endl;
            break;
        }
    }
    delete[] p;

}