#include <iostream>
using namespace std;


class Board {
public:
    static int size;
    static string str[100];

    static void add(string add) {
        str[size] = add;
        size++;
    }

    static void print() {
        cout << "********** �Խ����Դϴ� **********" << endl;
        for (int i = 0; i < size; i++) {
            cout << i << ": " << str[i] << endl;
        }
        cout << endl;
    }
};
int Board::size = 0;
string Board::str[100];
int main() {
    // Board myBoard; // ��ü ������ ������ �����Դϴ�. 
    Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
    Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
    Board::print();
    Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
    Board::print();
}
