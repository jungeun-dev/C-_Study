#include <iostream>
using namespace std;

int main() {
	int id,amount;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ� *****" << endl;
	while (1) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> id;
		switch (id) {
		case 1:
			cout << "���κ�?";
			cin >> amount;
			cout << "«��" << amount << "�κ� ���Խ��ϴ�" << endl;
			break;
			
		case 2:
			cout << "���κ�?";
			cin >> amount;
			cout << "¥��" << amount << "�κ� ���Խ��ϴ�" << endl;
			break;
		case 3:
			cout << "���κ�?";
			cin >> amount;
			cout << "������" << amount << "�κ� ���Խ��ϴ�" << endl;
			break;
		case 4:
			cout << "���� ������ �������ϴ�" << endl;
			return 0;
		default:
			cout << "�ٽ� �ֹ��ϼ��� !!" << endl;
			break;
		}
	}
	return 0;
}