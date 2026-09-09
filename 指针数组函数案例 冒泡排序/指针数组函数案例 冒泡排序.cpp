#include<iostream>
using namespace std;
//创建冒泡排序函数
void bubblesort(int*arr,int length) {
	for(int a=0;a<length-1;a++){
		for (int b = 0;b < length - a - 1;b++) {
			if (arr[b] > arr[b + 1]) {
				int temp = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = temp;
			}
	}
	}
	}
//打印数组函数
void printarr(int* arr,int length) {
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	//封装一个函数，利用冒泡排序，实现数组升序排列
	//先创建数组
	int arr[] = { 4,3,6,9,1,2,10,8,7,5 };
	//数组长度
	int length = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, length);
	printarr(arr,length);
	system("pause");
	return 0;
}