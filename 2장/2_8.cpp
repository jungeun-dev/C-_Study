#include <iostream>
#include <string>
using namespace std; 
int main() {
	string str[5],name;
	int max = 0;
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���>>";
	for (int i = 0; i < 5; i++) getline(cin, str[i],';');
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " : " << str[i] << endl;
		if (str[i].length() > max) {
			name = str[i];
			max = name.length();
		}
	}
	cout << "���� �� �̸��� " << name << endl;

	return 0;
}