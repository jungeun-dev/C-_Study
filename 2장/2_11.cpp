#include <iostream>
using namespace std;

int main() {
	int a,ans=0;
	cout << "끝 수를 입력하세요>>";
	cin >> a;
	for (int i = 1; i <= a; i++) ans += i;
	cout << "1에서" << a << "까지의 합은 " << ans << "입니다." << endl;
}