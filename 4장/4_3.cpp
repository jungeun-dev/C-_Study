#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string str;
	cout << "문자열 입력>>";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') count++;
	}

	cout << "문자 a는 " << count << "개 있습니다." << endl;
}
