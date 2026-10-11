#include<iostream>
using namespace std;

class base {
public:
	base() {
		m_a = 100;
	}
	int m_a;
	void func() {
		cout << "base func函数的调用" << endl;
	}
};

class son :public base {
public:
	son() {
		m_a = 200;
	}
	int m_a;
	void func() {
		cout << "son func函数的调用" << endl;
	}
	};

void test0() {
	son s;
	cout << "son下的m_a=" << s.m_a << "\n";
}

void test1() {
	son s;
	cout << "base下的m_a=" << s.base::m_a << "\n";
}

void test2() {
	son s;
	s.func();
}

void test3() {
	son s;
	s.base::func();
}
int main() {
	test0();
	test1();
	test2();
	test3();
	system("pause");
	return 0;
}