#include <iostream>
#include <string>
using namespace std;

class Book {
    char* title; // ���� ���ڿ� 
    int price; // ���� 
public:
    Book(const char* title, int price);
    ~Book();
    void set(char* title, int price);
    void show() { cout << title << ' ' << price << "��" << endl; }
};

int main() {
    string  b = "sdfsdsdf";
    char a[20];
    strcpy(a, b.c_str());
    cout << a;
}