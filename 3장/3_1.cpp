#include <iostream>
using namespace std;

class Tower {
	int Height;
public:
	Tower() {
		Height = 1;
	}
	Tower(int a) {
		Height = a;
	}
	int getHeight() {
		return Height;
	}

};

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;

	return 0;
}