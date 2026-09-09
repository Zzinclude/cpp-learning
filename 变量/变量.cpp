#include<iostream>
using namespace std;
int main()
{
#define Day 7
	const int month = 12;
	int a = 10;
	char ch = 'b';
	cout << "int一共占用空间：" << sizeof(int) << endl;
	cout << "hello world" << endl;
	cout << "a=" << a << endl;
	//下一行是一个Day宏常量的输出
	cout << "一周有多少天：" << Day << "天" << endl;
	//下一行是const修饰变量的输出
	cout << "一年总共有：" << month << "个月" << endl;
	cout << (int)ch << endl;
	system("pause");
	return 0;
}
