#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 20;
	int c = 0;
	//比较a和b的大小，将大的变量赋值给c。
	c = (a > b ? a : b);
	cout << "c的值为：" << c << endl;
	(a > b ? a : b) = 100;
	cout << "a=" <<a<< endl;
	cout << "b=" <<b<< endl;
	system("pause");
	return 0;
}