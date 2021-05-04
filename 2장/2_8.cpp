#include <iostream>
#include <string>
using namespace std; 
int main() {
	string str[5],name;
	int max = 0;
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요>>";
	for (int i = 0; i < 5; i++) getline(cin, str[i],';');
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " : " << str[i] << endl;
		if (str[i].length() > max) {
			name = str[i];
			max = name.length();
		}
	}
	cout << "가장 긴 이름은 " << name << endl;

	return 0;
}