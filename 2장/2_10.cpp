#include <iostream>
using namespace std;


int main() {
	string str;
	cout << "���ڿ� �Է�>>";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < i + 1; j++)
			cout << str[j];
		cout <<endl;
	}

	return 0;

}