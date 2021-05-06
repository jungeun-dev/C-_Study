#include <iostream>
using namespace std;


class Container {               // �� �ϳ��� ��Ÿ���� Ŭ���� 
    int size;                   // ���� ���� ��, �ִ� ���差�� 10 
public:
    Container() { size = 10; }
    void fill() { size = 10; }                // �ִ뷮(10)���� ä��� 
    void consume() { size--; }             // 1 ��ŭ �Ҹ��ϱ� 
    int getSize() {
        return size;
    }
};

class CoffeeVendingMachine {    
    Container tong[3];  
    void fill() {
        for (int i = 0; i < 3; i++) tong[i].fill();
    }
    void selectEspresso() { 
        if (tong[0].getSize() > 0 && tong[1].getSize() > 0) {
            tong[0].consume(); tong[1].consume();
            cout << "���������� �弼��" << endl;
        }
        else {
            cout << "���ᰡ �����մϴ�" << endl;
        }
    }   
    void selectAmericano() {
        if (tong[0].getSize() > 0 && tong[1].getSize() > 1) {
            tong[0].consume(); tong[1].consume(); tong[1].consume();
            cout << "�Ƹ޸�ī�� �弼��" << endl;
        }
        else {
            cout << "���ᰡ �����մϴ�" << endl;
        }
    }
    void selectSugarCoffee() {
        if (tong[0].getSize() > 0 && tong[1].getSize() > 1 && tong[2].getSize() > 0) {
            tong[0].consume(); tong[1].consume(); tong[1].consume(); tong[2].consume();
            cout << "����Ŀ�� �弼��" << endl;
        }
        else {
            cout << "���ᰡ �����մϴ�" << endl;
        }
    }
    void show() {
        cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
    }
public:
    void run() {
        int num;
        cout << "***** Ŀ�� ���Ǳ⸦ �۵��մϴ�. *****" << endl;
        while (true) {
            cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
            cin >> num;
            switch (num) {
            case 1:
                selectEspresso();
                break;
            case 2:
                selectAmericano();
                break;
            case 3:
                selectSugarCoffee();
                break;
            case 4:
                show();
                break;
            case 5:
                fill();
                show();
                break;
            }
        }
    }
};
int main() {
    CoffeeVendingMachine* coffee = new CoffeeVendingMachine;
    coffee->run();
    delete coffee;
}
