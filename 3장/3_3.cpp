#include <iostream>
using namespace std;

class Account {
	string owner;
	int account;
	int balance;
public:
	Account(string o, int ac, int bal) {
		owner = o;
		account = ac;
		balance = bal;
	}
	void deposit(int plus) {
		balance += plus;
	}
	int withdraw(int minus) {
		if (minus > balance) cout << "ÀÜ¾×ÀÌ ºÎÁ·ÇÕ´Ï´Ù." << endl;
		else {
			balance -= minus;
		}
		return balance;
	}
	string getowner() { return owner; }
	int inquiry() { return balance; }

};
int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getowner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getowner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}