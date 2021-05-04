#include <iostream>
using namespace std;
 

int main() {

	int num = 1;
	while (num <= 100) {
		cout << num << '\t';
		if (num % 10 == 0) cout << endl;
		num++;
	}

	return 0;
}