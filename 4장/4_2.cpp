#include <iostream>
using namespace std;

int main() {
	int* arr = new int[5];
	float avg = 0;
	cout << "���� 5�� �Է�>>";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		avg += arr[i];
	}
	avg /= 5;
	cout << "��� " <<avg << endl;

	delete[] arr;

}