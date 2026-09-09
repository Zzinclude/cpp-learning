#include<iostream>
using namespace std;
int main() {
	//加减乘除
	int a = 10;
	int b = 3;
	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << a * b << "\n";
	cout << a / b << "\n";//两个整数相除，结果依然是整数
	cout << a % b << "\n";//取余不能用小数代入
	//1.前置递增 先让变量+1，再进行表达式运算
	int a1 = 10;
	int b1 = ++a1 * 2;
	cout << "a1=" << a1 << "\n";
	cout << "b1=" << b1 << "\n";
	//2.后置递增 先进行表达式运算，再让变量+1
	int a2 = 10;
	int b2 = a2++ * 2;
	cout << "a2=" << a2 << "\n";
	cout << "b2=" << b2 << "\n";
	//3.递减同理
	system("pause");
	return 0;
}