#include<iostream>
using namespace std;
int main() {
	int num0 = 100;
	int a = 0;
	int b = 0;
	int c = 0;
	while (num0 < 1000) {
		a = num0 % 10;
		b = num0 / 10 % 10;
		c = num0 / 100;
		if (a * a * a+ b * b * b + c * c * c == num0) {
			cout << num0 << endl;
		}
		num0++;
	}
	system("pause");
	return 0;
}