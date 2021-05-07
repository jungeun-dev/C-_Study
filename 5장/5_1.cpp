#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};
void swap(Circle& a, Circle& b) {
	Circle tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int main() {
	Circle a, b(10);
	cout << "a�� ������ " << a.getRadius() << " b�� ������ " << b.getRadius() << endl;
	cout << "swap ��>>" << endl;
	swap(a, b);
	cout << "a�� ������ " << a.getRadius() << " b�� ������ " << b.getRadius() << endl;
	return 0;

}
