#include<iostream>
using namespace std;
//圆周率pi=3.14
const double pi = 3.14;
//设计一个圆类，求圆的周长
//周长公式：2*pi*半径

//class代表设计一个类，类后面紧紧跟着就是类的名称
class circle {
	//访问权限
public://公共权限

	//属性
	int r;//半径
	//行为
	double calculateC() {
		return 2 * pi * r;
	}
};

int main() {
	//通过圆类 创建一个具体的圆
	//实例化
	circle ci;
	//给圆对象的属性赋值
	ci.r = 10;
	cout << "圆的周长为：" << ci.calculateC() << endl;
	system("pause");
	return 0;
}