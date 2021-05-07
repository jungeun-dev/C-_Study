#include <iostream>
#include <string>
using namespace std;

class Book {
    char* title; // 제목 문자열 
    int price; // 가격 
public:
    Book(const char* title, int price);
    ~Book();
    void set(char* title, int price);
    void show() { cout << title << ' ' << price << "원" << endl; }
};

int main() {
    string  b = "sdfsdsdf";
    char a[20];
    strcpy(a, b.c_str());
    cout << a;
}