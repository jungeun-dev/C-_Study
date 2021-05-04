#include <iostream>
using namespace std;

int main() {
	int id,amount;
	cout << "***** 승리장에 오신 것을 환영합니다 *****" << endl;
	while (1) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> id;
		switch (id) {
		case 1:
			cout << "몇인분?";
			cin >> amount;
			cout << "짬뽕" << amount << "인분 나왔습니다" << endl;
			break;
			
		case 2:
			cout << "몇인분?";
			cin >> amount;
			cout << "짜장" << amount << "인분 나왔습니다" << endl;
			break;
		case 3:
			cout << "몇인분?";
			cin >> amount;
			cout << "군만두" << amount << "인분 나왔습니다" << endl;
			break;
		case 4:
			cout << "오늘 영업은 끝났습니다" << endl;
			return 0;
		default:
			cout << "다시 주문하세요 !!" << endl;
			break;
		}
	}
	return 0;
}