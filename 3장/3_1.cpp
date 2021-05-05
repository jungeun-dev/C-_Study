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
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

	return 0;
}