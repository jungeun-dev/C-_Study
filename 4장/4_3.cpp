#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string str;
	cout << "���ڿ� �Է�>>";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') count++;
	}

	cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;
}
