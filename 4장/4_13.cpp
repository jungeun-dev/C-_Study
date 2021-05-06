#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string str;
public:
	Histogram(string s) { 
		str = s;
		cout << str << endl;
	}
	void put(string add) {
		str += add;
		cout << add;
	}
	void putc(char add) {
		str += add;
		cout << add;
	}
	void print() {
		int arr[26] = { 0, };
		int count = 0;

		cout << endl << endl;
		for (int i = 0; i < str.length(); i++) {
			if (isalpha(str[i])) {
				count++;
				arr[tolower(str[i]) - 'a']++;
			}
		}
		cout << "ÃÑ ¾ËÆÄºª ¼ö " << count << endl<<endl;

		for (char ch = 'a'; ch <= 'z'; ch++) {
			cout << ch << " (" << arr[ch - 'a'] << ")\t: ";
			for (int i = 0; i < arr[ch - 'a']; i++) cout << "*";
			cout << endl;
		}
	}
};

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

}