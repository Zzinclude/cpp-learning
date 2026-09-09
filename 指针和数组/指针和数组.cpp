#include<iostream>
using namespace std;
int main() {
	//指针和数组
	//利用指针访问数组中元素
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	cout << "第一个元素为："<< arr[0] << endl;
	int* p = arr;//数组名arr就是首地址
	cout<< "第一个元素为：" <<*p << endl;
	p++;//让指针向后偏移四个字节(int)
	cout << "第二个元素为：" << *p << endl;
	//利用指针遍历数组
	int* p1 = arr;
	for (int a = 0;a < 9;a++)
	{
		cout << *p1 << " ";
		p1++;
	}
	system("pause");
	return 0;
}