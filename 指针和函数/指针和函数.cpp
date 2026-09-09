#include<iostream>
using namespace std;
//实现两个数据交换的代码
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
//通过解地址，让实参值改变
void swap2(int* p1, int* p2) {
	int temp1 = *p1;
	*p1 = *p2;
	*p2 = temp1;
	cout << "a=" << *p1 << endl;
	cout << "b=" << *p2 << endl;
}
int main() {
	//指针和函数

	//1.值传递
	int a = 10;
	int b = 20;
	swap1(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//2.地址传递
	swap2(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}
//变量名仅仅指一个数据，指针解引用则指该变量的数据。