#include<iostream>
using namespace std;
//1.遇到引用作为重载的条件
void func(int& a) {
	cout << "调用func（int &a）" << endl;
}

void func(const int& a) {
	cout << "调用func(const int &a)" << endl;
}

//2.碰到默认参数

void func2(int a,int b=10) {
	cout << "调用func2（int a,int b=10）" << endl;
}

void func2(int a) {
	cout << "调用func2（int a）" << endl;
}

int main() {
	int a = 10;
	func(a);
	func(10);
	func2(10);//报错，有歧义
	system("pause");
	return 0;
}