#include<iostream>
using namespace std;
//1.构造函数的分类
//	按照参数分类	无参构造（默认构造）和有参构造
//	按照类型分类	普通构造和拷贝构造
class person {
public:
	person() {
		cout << "person的无参构造函数的调用" << endl;
	}
	person(int a) {
		age = a;
		cout << "person的有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	person(const person &p) {
		//将传入人身上的所有属性拷贝到另一个人身上
		cout << "person的拷贝构造函数的调用" << endl;
		age = p.age;
	}
	int age;
};
//调用
void test01() {
	//1.括号法
	person p0;//默认构造函数调用，不能使用括号（否则视为函数声明）
	person p1(10);//调用有参构造函数
	person p2(p1);//调用拷贝构造函数
	cout << "p2年龄为：" << p2.age << endl;
	//2.显示法
	person p3;//默认构造函数
	person p4 = person(10);//调用有参构造函数
	person p5 = person(p4);//调用拷贝构造函数
	person(10);//匿名对象 执行结束后（下一行），系统立即回收掉匿名对象
	//不要利用拷贝构造函数，初始化匿名对象
	person (p4);//等价于person p4(重定义了)
	//3.隐式转换法
	person p6 = 10;//相当于显示法中调用有参函数
	person p7 = p6;//调用拷贝构造函数
}
int main() {
	test01();
	system("pause");
	return 0;
}