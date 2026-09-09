#include<iostream>
using namespace std;
int main() {
	//1.统计占用内存大小
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	int a = 0;
	a = sizeof(arr) / sizeof(arr[0]);//数组大小除以一个数据大小等于数组中数据个数
	cout<<a << endl;
	//2.通过数组名查看数组首地址
	cout << arr << endl;//16进制
	cout << (int)arr << endl;//强制改为10进制
	cout << (int)&arr[0] << endl;//查看数组中数据的地址
	//数组首地址等于第一个元素的地址，第二个元素地址和第一个相差其数据类型的内存大小
	//数组名为常量，不可赋值
	system("pause");
	return 0;
}