#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) { this->radius = radius; this->name = name; }
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
	void set(string name, int radius) {
		this->radius = radius;
		this->name = name;
	}
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size) {
		this->size = size;
		p = new Circle[size];
	}
	~CircleManager() { delete[] p; }
	void searchByName();
	void searchByArea();
	void set(int idx, string name, int radius);
};
void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getName() == name) {
			cout << name << "�� ������ " << (p + i)->getArea() << endl;
			break;
		}
	}
}
void CircleManager::searchByArea() {
	int area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getArea() > area) {
			cout << (p + i)->getName() << "�� ������ " << (p + i)->getArea() << ",";
		}
	}
	cout << endl;
}
void CircleManager::set(int idx, string name, int radius) {
	(p + idx)->set(name, radius);
}
int main() {
	int n, radius;
	string name;
	cout << "���� ���� >> ";
	cin >> n;
	CircleManager c_manager(n);
	for (int i = 0; i < n; i++) {
		cout << "�� " << (i + 1) << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		c_manager.set(i, name, radius);
	}
	c_manager.searchByName();
	c_manager.searchByArea();

}