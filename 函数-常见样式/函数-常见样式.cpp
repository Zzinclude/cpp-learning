#include<iostream>
using namespace std;
	//无参无返函数
void test01()
	{
		cout << "这是test01" << endl;
	}
	//无参有返函数
int test02() {
		cout << "这是test02" << endl;
		return 100;
	}
	//有参无返函数
void test03(int num1) {
		cout << "这是test03 num1="<< num1 << endl;
	}
	//有参有返函数
int test04(int num2) {
		cout << "这是test04 num2="<< num2 << endl;
		return 1000;
	}
	

int main() {
	//无参无返函数调用
	test01();
	cout << test02() << endl;//跑一遍test02再输出return值
	test03(1);
	cout << test04(2) << endl;//跑一遍test04再输出return值
		system("pause");
		return 0;
	}