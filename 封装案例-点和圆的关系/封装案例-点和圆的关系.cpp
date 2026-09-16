#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
//点和圆关系案例

//class point {
//public:
//	void setx(int x) {
//		x0 = x;
//	}
//	void sety(int y) {
//		y0 = y;
//	}
//	int getx() {
//		return x0;
//	}
//	int gety() {
//		return y0;
//	}
//private:
//	int x0;
//	int y0;
//};

//class circle {
//public:
//	void setcenter(point setcenter) {
//		center = setcenter;
//	}
//	void setr(int setr) {
//		r = setr;
//	}
//	point getcenter() {
//		return center;
//	}
//	int getr() {
//		return r;
//	}
//
//private:
//	int r;
//	point center;
//};
//判断点和圆的关系
void isincircle(circle& c, point& p) {
	//先计算两点之间距离的平方
	int distance = (c.getcenter().getx() - p.getx()) *
		(c.getcenter().getx() - p.getx()) +
		(c.getcenter().gety() - p.gety()) *
		(c.getcenter().gety() - p.gety());
	//计算半径的平方
	int rdistance = (c.getr()) * (c.getr());
	//比较大小
	if (distance > rdistance) {
		cout << "点在圆外" << endl;
	}
	else if (distance < rdistance) {
		cout << "点在圆内" << endl;
	}
	else {
		cout << "点在圆上" << endl;
	}
}
int main() {
	circle c0;
	point p0;
	point center;
	center.setx(3);
	center.sety(3);
	c0.setcenter(center);
	c0.setr(3);
	p0.setx(6);
	p0.sety(6);
	isincircle(c0, p0);
	system("pause");
	return 0;
}