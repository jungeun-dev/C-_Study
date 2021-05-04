#include <iostream>
using namespace std;

int main() {
	int a, c, ans = 0;
	char b;
	while (1) {
		cout << "? ";
		cin >> a >> b >> c;
		if (b == '+') ans = a + c;
		else if (b == '-') ans = a - c;
		else if (b == '*')ans = a * c;
		else if (b == '/') ans = a / c;
		else ans = a % c;

		cout << a << " " << b << " " << c << " = " << ans << endl;

	}

}