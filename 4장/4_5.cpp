#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	string str;
	int random,n;
	srand((unsigned)time(0));
	string a = "";
	for (char i = 'a'; i <= 'z'; i++) a+=i;
	for (char i = 'A'; i <= 'Z'; i++) a+=i;
	cout << "아래 한 줄을 입력하시오.(exit를 입력하면 종료합니다)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, str);
		if (str == "exit") break;
		
		n = rand() % str.length();
		while (!isalpha(str[n])) { n = rand() % str.length(); }
		
		random = rand() % a.length();
		
		str[n] = a[random];

		for (int i = 0; i < str.length(); i++) {
			cout << str[i];
		}
		cout << endl;
	}

}