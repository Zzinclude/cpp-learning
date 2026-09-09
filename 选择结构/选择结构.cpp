#include<iostream>
using namespace std;
int main() {
	//选择结构 单行if语句
	//如果高考分数大于600分，输出考上一本大学
	int a = 0;
	cout << "请输入您的高考分数：";
	cin >> a;
	cout << "您的高考分数为：" << a << endl;
	if (a > 600)
	{
		cout << "恭喜您考上一本大学!" << endl;
	}
	system("pause");
	return 0;
}