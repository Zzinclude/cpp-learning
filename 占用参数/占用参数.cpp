#include<iostream>
using namespace std;
//占用参数
//返回值类型 函数名（数据类型）
int func(int a,int=10) {
	cout << "this is a function" << endl;
	return 0;
}
//占用参数还可以有默认参数

int main() {
	func(10);
	system("pause");
	return 0;
}