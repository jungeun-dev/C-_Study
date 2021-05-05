#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class EvenRandom {
public:
	EvenRandom() {
		srand((unsigned)time(0));
	}
	int next() {
		int n = rand();
		if (n % 2 == 1) n += 1;
		return n;
	}
	int nextInRange(int st, int end) {
		int n = st + (rand() % (end - st + 1));
		if (n % 2 == 1) {
			if (n == end) n--;
			else n++;
		}
		return n;
	}
};
int main() {
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}