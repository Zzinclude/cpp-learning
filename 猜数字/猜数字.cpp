#include<iostream>
#include<ctime>//time系统头文件包含
using namespace std;
int main() {
	srand((unsigned int)time(NULL));
	int num=rand() % 100+1;//rand() % 100+1为随机生产0-99，+1变为1-100
	cout << num << endl;
	int num1 = 0;
	cout << "请输入您猜测的数字：";
	cin >> num1;
	while (1) {
		if (num1 > num) {
			cout << "过大了" << endl;
		}
		else if(num1<num) { 
			cout << "偏小了" << endl;
		}
		else {
			cout << "恭喜您猜对了！" << endl;
			break;
		}
		cout << "请再次输入您猜测的数字：";
		cin >> num1;
	}
	system("pause");
	return 0;
}