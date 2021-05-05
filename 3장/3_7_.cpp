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
			//Â¦¼ö
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
			//Â¦¼ö
			if (n % 2 == 1) {
				if (n == end) n--;
				else n++;
			}
			return n;
		}
		else { // È¦¼ö
			if (n % 2 == 0) {
				if (n == st) n++;
				else n++;
			}
			return n;
		}
	}
};
int main() {
	SelectableRandom r(2);	// Â¦¼ö 
	SelectableRandom r1(1);	// È¦¼ö

	cout << "-- 0¿¡¼­ " << RAND_MAX << "±îÁöÀÇ Â¦¼ö ·£´ý Á¤¼ö 10 °³--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2¿¡¼­ " << "9 ±îÁöÀÇ ·£´ý È¦¼ö Á¤¼ö 10°³ --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r1.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}