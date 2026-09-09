#include<iostream>
using namespace std;
int main() {
	//1.数据类型 命名[数组长度];
	int arr[5];
	//给数组中元素进行赋值。
	arr[0] = 10;//从0开始索引。
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	cout << arr[3] << endl;
	//2.数据类型 命名[数组长度]={值1，值2，...}；
	int arr1[5] = { 10,20,30,40,50 };//填多了报错，填少了用0补全
	cout << arr1[4] << endl;
	for (int a = 0;a < 5;a++) {
		cout << arr1[a] << endl;
	}
	//3.数据类型 命名[]={值1，值2，...};  （自动补全数组长度）
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	for (int b = 0;b < 9;b++) {
		cout << arr2[b] << endl;
	}
	system("pause");
	return 0;
}