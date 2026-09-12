#include<iostream>
using namespace std;
//函数重载
//可以让函数重名

//满足条件
//1.同一个作用域上（目前均为全局函数）
//2.函数名相同
//3.函数参数类型不同，个数不同，或顺序不同
void func() {
	cout << "func的调用。" << endl;
}

void func(int a) {
	cout << "func(int a)的调用。" << endl;
}

void func(double a) {
	cout << "func(double a)的调用。" << endl;
}

void func(int a,double b) {
	cout << "func(int a,double b)的调用。" << endl;
}
void func(double a,int b) {
	cout << "func(double a,intb)的调用。" << endl;
}

int main() {
	func();
	func(1);
	func(1, 3.14);
	func(3.14, 1);
	system("pause");
	return 0;
}