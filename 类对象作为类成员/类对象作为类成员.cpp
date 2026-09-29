#include<iostream>
#include<string>
using namespace std;
class phone {
public:
	string pname;
	phone(string name) {
		cout << "phone的构造函数调用" << endl;
		pname = name;
	}
	~phone() {
		cout << "phone析构函数的调用" << endl;
	}
};
class person {
public:
	string m_name;
	phone m_phone;
	person(string name,string pname):m_name(name),m_phone(pname) {
		cout << "person构造函数调用" << endl;
	}
	~person() {
		cout << "person析构函数的调用" << endl;
	}
};
void test01(){
	person p0("张三","华为手机");
	cout << p0.m_name << "使用的手机为：" << p0.m_phone.pname << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}