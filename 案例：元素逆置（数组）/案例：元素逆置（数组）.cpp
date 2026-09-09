#include<iostream>
using namespace std;
int main() {
	int arr[] = { 1,2,3,4,5 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while (end > start) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;end--;
	}
	for (int a = 0;a < 5;a++) {
		cout << arr[a] << endl;
	}
	system("pause");
	return 0;
}