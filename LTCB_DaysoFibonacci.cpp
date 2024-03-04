#include <iostream>
using namespace std;
int main() {
	int a = 1, b = 1, tong, soluong;
	cout << "nhap so luong so dau day fibonacci: ";
	cin >> soluong;
	cout << "1 11";
	for (int i = 0; i <= soluong - 2; i++) {
		tong = a = b;
		cout << tong << " "; // 1 1 2
		a = b;
		b = tong;
	}
	return 0;
}