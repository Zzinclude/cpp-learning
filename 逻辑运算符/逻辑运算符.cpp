#include<iostream>
using namespace std;
int main() {
	//!为“非”，真变假，假变真
	int a = 10;
	cout << !a << "\n";//输出0
	cout << !!a << "\n";//输出1
	//&&为“与”，均为真才真，其余均为假
	int b = 1;
	int c = 0;
	cout << (a && b) << "\n";//输出1
	cout << (a && c) << "\n";//输出0
	//||为“或”，其中一个真即为真
	cout << (a || c) << "\n";//输出1
	cout << (c || c) << "\n";//输出0
	system("pause");
	return 0;
}