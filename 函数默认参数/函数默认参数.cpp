#include<iostream>
using namespace std;
//1.如果某个位置有默认参数，那么从他开始，从左到右都要有默认参数。
int func(int a = 10, int b = 10, int c = 10) {
	return a + b + c;
}
//2.函数的声明和实现只能有一个有默认参数
int func2(int a,int b);
int func2(int a=10,int b=10) {
	return a + b;
}

int main() {
	cout << func(30,30,30) << endl;
	cout<<func2(20,20);
	system("pause");
	return 0;
}