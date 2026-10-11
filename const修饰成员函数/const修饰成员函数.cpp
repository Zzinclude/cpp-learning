#include<iostream>
using namespace std;
//常函数
class person {
public:
	void showperson() const {//加const，this变为常量指针常量
		//this->a = 100;//指针实质是指针常量
		this->b = 100;
	}
	void func() {}
		int a;
	mutable int b;//想让它在常函数中也可以修改值
};
void test01() {
	person p;
	p.showperson();
}
//常对象
void test02() {
	const person p;
	//p.a = 100;
	p.b = 100;
	//常对象只能调用常函数
	p.showperson();
	//p.func();常对象不允许修改，如果常对象允许调用普通函数，
	//那么该普通函数可能涉及修改值操作
}
int main() {
	test01();
	system("pause");
	return 0;
}