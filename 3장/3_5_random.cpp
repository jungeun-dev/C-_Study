#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
	Random() {
		srand((unsigned)time(0));
	}
	int next() {
		return rand();
	}
	int nextInRange(int st, int end) {
		return (st + (rand() % (end - st + 1)));
	}
};
int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}