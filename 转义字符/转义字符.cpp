#include<iostream>
using namespace std;
int main() {
	//变量
	int a = 10;
	//变量可修改
	a = 20;
	cout << "a=" << a << "\n";
	//define常量，不可修改
#define b 30
	cout << "b=" << b << "\n";
	//const常量
	const int c = 40;
	cout << "c=" << c << "\n";
	//char字符型变量，只能单个字符
	char d = 'e';
	cout << "d=" << d << "\n";
	//char字符串变量，多个字符
	char f[] = "abcde";
	cout << "f=" << f << "\n";
	//bool类型变量，真1假0
	bool flag1 = true;
	cout << flag1 << "\n";
	bool flag2 = false;
	cout << flag2 << "\n";
	//bool所占空间
	cout << "bool所占空间:" << sizeof(bool) << "\n";
	//数据的输入 1.整型
	int g = 0;
	cout << "请给g赋值:" ;
	cin >> g;
	cout <<"g的值为：" << g << "\n";
	//数据的输入 2.浮点型
	float h = 3.14f;
	cout << "请给h赋值:" ;
	cin >> h;
	cout <<"h的值为：" << h << "\n";
	//数据的输入 3.字符型
	char i = 'a';
	cout << "请给i赋值：" ;
	cin >> i;
	cout << "i的值为：" <<i<< "\n";
	//数据的输入 4.字符串
	char j[] = "abcdef";
	cout << "请给j赋值：" ;
	cin >> j;
	cout << "j的值为：" << j << "\n";
	//数据的输入 5.bool类型
	bool k = false;
	cout << "请给k赋值：" << "\n";
	cin.clear();//清除cin错误状态标记
	cin.ignore(9999, '\n');//清空缓冲区所有残留字符直到换行
	cin >> k;
	cout << "k的值为：" << k << "\n";
	system("pause");
	return 0;
}