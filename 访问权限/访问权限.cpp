#include<iostream>
using namespace std;
//访问权限
//1.公共权限 public		成员 类内可以访问	类外也可以访问
//2.保护权限 protected	成员 类内可以访问 类外不可以访问
//3.私有权限 private	成员 类内可以访问 类外不可以访问
class person {
public:
	string name;

protected:
	string car;

private:
	int password;

public:
	void func() {
		name = "卢本伟";
		car = "拖拉机";
		password = 123456;
		//类内均可以访问
	}
};
int main() {
	person p1;//实例化
	p1.name = "胡思宇";
	//其他car，password属于保护和私有，类外无法访问
	system("pause");
	return 0;
}