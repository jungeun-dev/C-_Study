#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int num = 0;
	int count[26] = {0,};
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	getline(cin, str, ';');

	for (char j = 'a'; j <= 'z'; j++) {
		for (int i = 0; i < str.length(); i++) {
			if (isalpha(str[i])) {
				if (tolower(str[i]) == j) count[j-'a']++;
			}
		}
		num+= count[j - 'a'];
	}
	cout << "�� ���ĺ� �� " << num << endl;
	for (char j = 'a'; j <= 'z'; j++) {
		cout << j << "(" << count[j - 'a'] << ")" << " : ";
		for (int k = 0; k < count[j - 'a']; k++) cout << "*";
		cout << endl;
	}
	
	return 0;
}