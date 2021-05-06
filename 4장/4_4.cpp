#include <iostream>
using namespace std;
class Sample {
    int* p;
    int size;
public:
    Sample(int n) {    // ������ 
        size = n; p = new int[n]; // n�� ���� �迭�� ���� ����
    }
    void read() {
        for (int i = 0; i < size; i++) {
            cin >> p[i];
        }
    }
    void write() {
        for (int i = 0; i < size; i++) {
            cout << p[i]<< " ";
        }
        cout << endl;
    }
    int big() {
        int max = p[0];
        for (int i = 1; i < size; i++) {
            if (p[i] > max) {
                max = p[i];             
            }
        }
        return max;
    }
    ~Sample() { delete[] p; }
};

int main() {
    Sample s(10); // 10�� ���� �迭�� ���� Sample ��ü ���� 
    s.read(); // Ű���忡�� ���� �迭 �б� 
    s.write(); // ���� �迭 ��� 
    cout << "���� ū ���� " << s.big() << endl; // ���� ū �� ��� 
}
