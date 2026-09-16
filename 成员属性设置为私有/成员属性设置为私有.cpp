#include<iostream>
using namespace std;
//成员属性设置为私有


class person {
public:
	void setname(string set_name) {
		name = set_name;
	}
	string getname() {
		return name;
	}
	int getage() {
		return age;
	}
	void setidol(string set_idol) {
		idol = set_idol;
	}

private:
	string name;//可读可写
	int age=18;//只可读
	string idol;//只可写
};
int main() {
	person p;
	p.setname("卢本伟");
	p.setidol("Zz");
	cout << "名字是：" << p.getname() << endl;
	cout << "年龄是：" << p.getage() << endl;
	system("pause");
	return 0;
}