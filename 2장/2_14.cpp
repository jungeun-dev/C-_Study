#include <iostream>
using namespace std;

int main() {
	int sum = 0,num,temp;
	string order;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	while (sum < 20000) {
		cout << "주문>>";
		cin >> order >> num;
		if (order == "에스프레소") temp = 2000;
		else if (order == "아메리카노") temp = 2300;
		else if (order == "카푸치노") temp = 2500;
		temp = temp * num;
		cout << temp << "입니다.맛있게 드세요" << endl;
		sum += temp;
	}
	cout << "오늘 " << sum << "을 판매하여 카페를 닫습니다. 내일 봐요 ~~~" << endl;
	return 0;
}