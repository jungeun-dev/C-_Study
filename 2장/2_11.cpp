#include <iostream>
using namespace std;

int main() {
	int a,ans=0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> a;
	for (int i = 1; i <= a; i++) ans += i;
	cout << "1����" << a << "������ ���� " << ans << "�Դϴ�." << endl;
}