#include <iostream>
#include <string>
using namespace std;

int main() {
	string name, address;
	int age;
	cout << "이름은?";
	getline(cin, name);
	//cin.ignore(); // 입력 버퍼 비우기

	cout << "주소는?";
	getline(cin, address);

	cout << "나이는?";
	cin >> age;
	cout << name << "," << address << "." << age << "세" << endl;

	return 0;
}