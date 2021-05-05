#include <iostream>
#include <string>
using namespace std;
class InTeger {
	int n;
public:
	InTeger(int num) { n = num;}
	InTeger(string num) { n = stoi(num); }
	int get() { return n; }
	void set(int num) { n = num; }
    bool isEven() {
		return n % 2 == 0 ? true : false;
	}
};
int main() {
	InTeger n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	InTeger m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}