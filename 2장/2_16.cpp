#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int num = 0;
	int count[26] = {0,};
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	getline(cin, str, ';');

	for (char j = 'a'; j <= 'z'; j++) {
		for (int i = 0; i < str.length(); i++) {
			if (isalpha(str[i])) {
				if (tolower(str[i]) == j) count[j-'a']++;
			}
		}
		num+= count[j - 'a'];
	}
	cout << "총 알파벳 수 " << num << endl;
	for (char j = 'a'; j <= 'z'; j++) {
		cout << j << "(" << count[j - 'a'] << ")" << " : ";
		for (int k = 0; k < count[j - 'a']; k++) cout << "*";
		cout << endl;
	}
	
	return 0;
}