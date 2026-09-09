#include<iostream>
using namespace std;
int main() {
	//先认定0为最大数，访问数组中的各个数据，若比认定的最大值大就更新为最大值
	int max = 0;
	int arr[] = { 100,250,450,350,400 };
	for (int a = 0;a < 5;a++) {
		if (arr[a] > max) {
			max = arr[a];
		}
	}
	cout << "小猪最重为：" << max << endl;
	system("pause");
	return 0;
}