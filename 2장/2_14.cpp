#include <iostream>
using namespace std;

int main() {
	int sum = 0,num,temp;
	string order;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	while (sum < 20000) {
		cout << "�ֹ�>>";
		cin >> order >> num;
		if (order == "����������") temp = 2000;
		else if (order == "�Ƹ޸�ī��") temp = 2300;
		else if (order == "īǪġ��") temp = 2500;
		temp = temp * num;
		cout << temp << "�Դϴ�.���ְ� �弼��" << endl;
		sum += temp;
	}
	cout << "���� " << sum << "�� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ���� ~~~" << endl;
	return 0;
}