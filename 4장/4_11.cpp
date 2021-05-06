#include <iostream>
using namespace std;


class Container {               // 통 하나를 나타내는 클래스 
    int size;                   // 현재 저장 량, 최대 저장량은 10 
public:
    Container() { size = 10; }
    void fill() { size = 10; }                // 최대량(10)으로 채우기 
    void consume() { size--; }             // 1 만큼 소모하기 
    int getSize() {
        return size;
    }
};

class CoffeeVendingMachine {    
    Container tong[3];  
    void fill() {
        for (int i = 0; i < 3; i++) tong[i].fill();
    }
    void selectEspresso() { 
        if (tong[0].getSize() > 0 && tong[1].getSize() > 0) {
            tong[0].consume(); tong[1].consume();
            cout << "에스프레소 드세요" << endl;
        }
        else {
            cout << "원료가 부족합니다" << endl;
        }
    }   
    void selectAmericano() {
        if (tong[0].getSize() > 0 && tong[1].getSize() > 1) {
            tong[0].consume(); tong[1].consume(); tong[1].consume();
            cout << "아메리카노 드세요" << endl;
        }
        else {
            cout << "원료가 부족합니다" << endl;
        }
    }
    void selectSugarCoffee() {
        if (tong[0].getSize() > 0 && tong[1].getSize() > 1 && tong[2].getSize() > 0) {
            tong[0].consume(); tong[1].consume(); tong[1].consume(); tong[2].consume();
            cout << "설탕커피 드세요" << endl;
        }
        else {
            cout << "원료가 부족합니다" << endl;
        }
    }
    void show() {
        cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
    }
public:
    void run() {
        int num;
        cout << "***** 커피 자판기를 작동합니다. *****" << endl;
        while (true) {
            cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
            cin >> num;
            switch (num) {
            case 1:
                selectEspresso();
                break;
            case 2:
                selectAmericano();
                break;
            case 3:
                selectSugarCoffee();
                break;
            case 4:
                show();
                break;
            case 5:
                fill();
                show();
                break;
            }
        }
    }
};
int main() {
    CoffeeVendingMachine* coffee = new CoffeeVendingMachine;
    coffee->run();
    delete coffee;
}
