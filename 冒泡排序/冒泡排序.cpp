#include<iostream>
using namespace std;
int main() {
	//比较相邻的元素，如果第一个比第二个大，就交换位置。
	//每一对相邻元素都做，找到第一个最大值。
	//找到后，比较次数减1，直到不用比较。
	int arr[] = { 6,8,3,2,1,4,9,7,5 };
	for (int a = 0;a < 9 - 1 ;a++) {
		for (int b=0;b < 9 - a - 1;b++) {
			if (arr[b] > arr[b + 1]) {
				int temp = 0;
				temp = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = temp;
			}
		}
	}
	for (int c = 0;c < 9;c++) {
		cout << arr[c] << " ";
	}
	}