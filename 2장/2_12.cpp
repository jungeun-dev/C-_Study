#include <iostream>
using namespace std;
int sum(int a, int b);

int main() {
	int n = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n) << " �Դϴ�." << endl;

	return 0;
}
int sum(int a, int b) {
	int s = 0;
	for (int i = a; i <= b; i++) s += i;
	return s;
}