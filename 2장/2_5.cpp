#include <iostream>
using namespace std;

int main() {
	int count = 0;
	char ch[100];
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(ch, 100);
	for (int i = 0; i < strlen(ch) ; i++) {
		if (ch[i] == 'x') count++;
	}
	
	cout << endl << "X�� ������ " << count << endl;

	return 0;
}