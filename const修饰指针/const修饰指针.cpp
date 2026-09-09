#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 20;

	//1.常量指针
	const int* p = &a;
	//特点：指针的指向可以修改，但指针指向的值不可以修改
	//*p=20;错误，指针指向的值不可修改
	p = &b;//正确，可修改指向

	//2.指针常量
	int* const p1 = &a;
	//特点：指针指向不可修改，指针指向的值可以修改
	//p1 = &b;错误，指针指向不可修改
	*p1 = 30;//正确，指针指向的值可以修改

	//3.常量指针常量
	const int* const p2 = &a;//均不可修改
	
	system("pause");
	return 0;
}