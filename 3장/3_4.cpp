#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
public:
	CoffeeMachine(int c, int w, int s) {
		coffee = c; water = w; sugar = s;
	}
	void drinkEspresso() {
		if (coffee > 0 && water > 0) {
			coffee--;
			water--;
		}
		else cout << "��ᰡ �����մϴ�" << endl;
	}
	void drinkAmericano() {
		if (coffee > 0 && water > 1) {
			coffee--;
			water-=2;
		}
		else cout << "��ᰡ �����մϴ�" << endl;
	}
	void drinkSugarCoffee() {
		if (coffee > 0 && water > 1&& sugar>0) {
			coffee--;
			water-=2;
			sugar--;
		}
		else cout << "��ᰡ �����մϴ�" << endl;
	}
	void show() {	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << "\t��:" << water << "\t����:" << sugar << endl;	}
	void fill() {	coffee = 10; water = 10; sugar = 10;	}
};
int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}