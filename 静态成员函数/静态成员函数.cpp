#include<iostream>
using namespace std;
//静态成员函数
//所有对象共享同一个函数
//静态函数成员只能访问静态成员变量
class person {
public:
	//静态成员函数
	static void func() {
		cout << "static void func调用" << endl;
		p_a = 100;//由于共享数据，可以被访问
		cout << "p_a=" << p_a << endl;
		//p_b = 100;//静态成员函数无法访问非静态成员变量，不知道它属于哪个对象
	}
	static int p_a;
	int p_b;
};
int person::p_a = 10;
//对象访问
void test01() {
	person p0;
	p0.func();
}
//类名访问
void test02() {
	person::func();
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}