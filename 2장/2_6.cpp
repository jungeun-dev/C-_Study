#include <iostream>
using namespace std;

int main() {
	string a, b;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> a;
	cout << "�� ��ȣ�� �ٽ� �ѹ� �Է��ϼ���>>";
	cin >> b;
	cout << (a == b ? "�����ϴ�" : "���� �ʽ��ϴ�") << endl;
	
	return 0;
}