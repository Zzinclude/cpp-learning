#include<iostream>
using namespace std;
//设计长方体类
//1.创建长方体类
//2.属性和行为
//3.设计行为：获取长方体面积和体积
//4.判断两个长方体是否相等
class cube {
public:
	//长
	void setl(int set_l) {
		l = set_l;
	}
	int getl() {
		return l;
	}
	//宽
	void setw(int set_w) {
		w = set_w;
	}
	int getw() {
		return w;
	}
	//高 
	void seth(int set_h) {
		h = set_h;
	}
	int geth() {
		return h;
	}
	//面积
	int calculates() {
		return 2 * l * w + 2 * l * h + 2 * w * h;
	}
	//体积
	int calculatev() {
		return l * w * h;
	}
	//利用成员函数判断是否相等
	bool issameclass(cube& c) {
		if (l == c.getl() && w == c.getw() && h == c.geth()) {
			return true;
		}
		return false;
	}
	
private:
	int l;
	int w;
	int h;
};
//利用全局函数判断是否相等
bool issame(cube &c0, cube &c1) {
	if (c0.getl() == c1.getl() && c0.getw() == c1.getw() && c0.geth() == c1.geth()) {
		return true;
	}
	return false;
}

int main() {
	cube c0;
	c0.setl(5);
	c0.setw(6);
	c0.seth(7);
	cout << "面积为：" << c0.calculates() << endl;
	cout << "体积为：" << c0.calculatev() << endl;
	cube c1;
	c1.setl(5);
	c1.setw(6);
	c1.seth(7);
	//判断
	bool ret=issame(c0, c1);
	if (ret) {
		cout << "两个长方体相等" << endl;
	}
	else {
		cout << "两个长方体不相等" << endl;
	}
	bool ret1 = c0.issameclass(c1);//引用c0，传入c1
	if (ret1) {
		cout << "成员函数判断：两个长方体相等" << endl;
	}
	else {
		cout << "成员函数判断：两个长方体不相等" << endl;
	}

	system("pause");
	return 0;
}