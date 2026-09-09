#include<iostream>
using namespace std;
int main() {
	int a = 0;
	cout << "请输入小猪A的体重：";
	cin >> a;
	int b = 0;
	cout << "请输入小猪B的体重：";
	cin >> b;
	int c = 0;
	cout << "请输入小猪C的体重：";
	cin >> c;
	if (a > b) {
		if (a > c) {
			cout << "小猪A最重" << endl;
		}
		else if (a < c) {
			cout << "小猪C最重" << endl;
		}
		else {
			cout << "小猪A和小猪C一样重且比小猪B重" << endl;
		}
	}
	else if (a < b) {
		if (b > c) {
			cout << "小猪B最重" << endl;
		}
		else if (b < c) {
			cout << "小猪C最重" << endl;
		}
		else {
			cout << "小猪B和小猪C一样重且比小猪A重" << endl;
		}
	}
	else {
		if (a > c) {
			cout << "小猪A和小猪B一样重且比小猪C重" << endl;
		}
		else if (a < c) {
			cout << "小猪A和小猪B一样重且比小猪C轻" << endl;
		}
		else {
			cout << "小猪A，小猪B和小猪C一样重" << endl;
		}
	}
	system("pause");
		return 0;
}