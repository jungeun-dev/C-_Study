#include <iostream>
using namespace std;

class Circle {
    int radius; // ���� ������ �� 
public:
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};
int main() {
    Circle arr[3];
    int r,count = 0;
    for (int i = 0; i < 3; i++) {
        cout << "�� " << i+1 << "�� ������ >>";
        cin >> r;
        arr[i].setRadius(r);
        if (arr[i].getArea() > 100) count++;
    }
    cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
}
