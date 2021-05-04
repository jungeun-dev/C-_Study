#include <iostream>
using namespace std;

int main() {
	double num[5] = { 0 };
	double max;
	cout << "5 개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> num[i];
	max = num[0];
	for (int i = 1; i < 5; i++) {
		if (num[i] > max) max = num[i];
	}
	cout << "제일 큰 수 = " << max;


	return 0;
}