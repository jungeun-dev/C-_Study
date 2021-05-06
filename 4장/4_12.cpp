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
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getName() == name) {
			cout << name << "의 면적은 " << (p + i)->getArea() << endl;
			break;
		}
	}
}
void CircleManager::searchByArea() {
	int area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getArea() > area) {
			cout << (p + i)->getName() << "의 면적은 " << (p + i)->getArea() << ",";
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
	cout << "원의 개수 >> ";
	cin >> n;
	CircleManager c_manager(n);
	for (int i = 0; i < n; i++) {
		cout << "원 " << (i + 1) << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		c_manager.set(i, name, radius);
	}
	c_manager.searchByName();
	c_manager.searchByArea();

}