#include <iostream>
using namespace std;

class Circle {
    int radius; // ���� ������ �� 
public:
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};
int main() {
    int n;
    cout << "���� ���� >> ";
    cin >> n;
    Circle *p = new Circle[n];
    int r, count = 0;
    for (int i = 0; i < n; i++) {
        cout << "�� " << i + 1 << "�� ������ >>";
        cin >> r;
        p[i].setRadius(r);
        if (p[i].getArea() > 100) count++;
    }
    cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
    delete[] p;
}
