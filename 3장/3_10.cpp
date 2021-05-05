#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a + b;
	}
};
class Sub {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a - b;
	}
};
class Mul {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a * b;
	}
};
class Div {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a / b;
	}
};

int main() {
	int op1, op2;
	char op;
	Add a;
	Sub s;
	Mul m;
	Div d;
	
	while (1) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> op1 >> op2 >> op;
		switch (op) {
		case '+':
			a.setValue(op1, op2);
			cout << a.calculate()<<endl;
			break;
		case '-':
			s.setValue(op1, op2);
			cout << s.calculate()<<endl;
			break;
		case '*':
			m.setValue(op1, op2);
			cout << m.calculate()<<endl;
			break;
		case '/':
			d.setValue(op1, op2);
			cout << d.calculate()<<endl;
			break;
		}
	}
}