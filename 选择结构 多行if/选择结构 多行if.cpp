#include<iostream>
#include <windows.h> // 必须包含此头文件
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8); // 设置控制台输出为 UTF-8
	int a = 0;
	cout << "请输入您的高考分数；";
	cin >> a;
	cout << "您的高考成绩为:" << a << endl;
	if (a > 600) {
		cout << "恭喜您考上一本大学！" << endl;
	}
	else {
		cout << "不要灰心,成绩还不错！" << endl;
	}
	system("pause");

	return 0;
}