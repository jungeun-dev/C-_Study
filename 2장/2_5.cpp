#include <iostream>
using namespace std;

int main() {
	int count = 0;
	char ch[100];
	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(ch, 100);
	for (int i = 0; i < strlen(ch) ; i++) {
		if (ch[i] == 'x') count++;
	}
	
	cout << endl << "X의 개수는 " << count << endl;

	return 0;
}