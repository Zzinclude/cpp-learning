#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 20;
	// ==相等
	cout << (a == b) << "\n";//括号为优先运算，否则先加减乘除再比较大小
	// !=不相等
	cout << (a != b) << "\n";
	// <小于
	cout << (a < b) << "\n";
	// >大于
	cout << (a > b) << "\n";
	// <=小于等于
	cout << (a <= b) << "\n";
	// >=大于等于
	cout << (a >= b) << "\n";
	system("pause");
	return 0;
}