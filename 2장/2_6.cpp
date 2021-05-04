#include <iostream>
using namespace std;

int main() {
	string a, b;
	cout << "새 암호를 입력하세요>>";
	cin >> a;
	cout << "새 암호를 다시 한번 입력하세요>>";
	cin >> b;
	cout << (a == b ? "같습니다" : "같지 않습니다") << endl;
	
	return 0;
}