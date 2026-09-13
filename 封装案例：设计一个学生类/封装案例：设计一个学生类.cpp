#include<iostream>
using namespace std;

//设计一个学生类
class stuedent {
public:
	//类中的属性和行为，统称为成员
	//属性：成员属性，成员变量
	//行为：成员函数，成员方法
	string name;
	int number;
	void showstudent() {
		cout << "姓名是：" << name << "\t学号是：" << number << endl;
	}
	void set(string s_name, int s_number) {
		name = s_name;number = s_number;
	}
};


int main() {
	stuedent st0;
	st0.name = "卢本伟";
	st0.number = 10086;
	st0.showstudent();
	//给st1赋值
	stuedent st1;
	st1.set("Zz", 14);
	st1.showstudent();
	system("pause");
	return 0;
}