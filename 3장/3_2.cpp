#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
public:
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	Date(string days) {
		int i = 0,j = 0;
		for (int k = i; k < days.length(); k++) {
			if (days[k] == '/') {
				if (j == 0) {
					year = stoi(days.substr(i, 4));
					i = k + 1;
					j++;
				}
				else {
					month = stoi(days.substr(i, 2));
					i = k + 1;
				}
			}
		}
		day = stoi(days.substr(i, 2));
	}
	void show() { cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;}
	int getYear() {	return year;}
	int getMonth() { return month; }
	int getDay() { return day; }

};

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1925/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}