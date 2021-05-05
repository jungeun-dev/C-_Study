#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
	int num;
public:
	SelectableRandom(int option) {
		num = option;
		srand((unsigned)time(0));
	}
	int next() {
		int n = rand();
		if (num % 2 == 0) {
			//¦��
			if (n % 2 == 1) n += 1;
			return n;
		}
		else {
			if (n % 2 == 0) n += 1;
			return n;
		}
	}
	int nextInRange(int st, int end) {
		int n = st + (rand() % (end - st + 1));
		if (num % 2 == 0) {
			//¦��
			if (n % 2 == 1) {
				if (n == end) n--;
				else n++;
			}
			return n;
		}
		else { // Ȧ��
			if (n % 2 == 0) {
				if (n == st) n++;
				else n++;
			}
			return n;
		}
	}
};
int main() {
	SelectableRandom r(2);	// ¦�� 
	SelectableRandom r1(1);	// Ȧ��

	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r1.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}