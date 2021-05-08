#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
	static void set() {
		srand((unsigned)time(0));
	}
	static void randomInt() {
		cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
		for (int i = 0; i < 10; i++) {
			cout << (rand() % 100)+1 << " ";
		}
		cout << endl;
	}
	static void randomAlpha() {
		string alpha;
		for (char ch = 'a'; ch <= 'z'; ch++) alpha += ch;
		for (char ch = 'A'; ch <= 'Z'; ch++) alpha += ch;
		cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
		for (int i = 0; i < 10; i++) {			
			cout << alpha[rand() % 52]<< " ";
		}
		cout << endl;
	}

	static void randomDouble() {
		double c = 0;
		double max = 32767;

		cout << "랜덤한 실수를 10개를 출력합니다" << endl;
		for (int i = 0; i < 10; i++) {
			if (i == 5) cout << endl;
			c = rand() / max;
			cout << c << " ";
		}
		cout << endl;
	}

};
int main() {
	Random::set();
	Random::randomInt();
	Random::randomAlpha();
	Random::randomDouble();
}