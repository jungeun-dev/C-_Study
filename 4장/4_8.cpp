#include <iostream>
using namespace std;

class Circle {
    int radius; // 원의 반지름 값 
public:
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};
int main() {
    int n;
    cout << "원의 개수 >> ";
    cin >> n;
    Circle *p = new Circle[n];
    int r, count = 0;
    for (int i = 0; i < n; i++) {
        cout << "원 " << i + 1 << "의 반지름 >>";
        cin >> r;
        p[i].setRadius(r);
        if (p[i].getArea() > 100) count++;
    }
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
    delete[] p;
}
