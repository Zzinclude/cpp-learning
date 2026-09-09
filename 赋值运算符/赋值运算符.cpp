#include<iostream>
using namespace std;
int main() {
	//1.等于
	int a = 10;
	a = 100;
	cout << "a=" << a << "\n";
	//加等于,减等于，乘等于，除等于，模等于均同理
	int b = 10;
	b += 2;//相当于b=b+2
	cout << "b=" << b << "\n";
	system("pause");
	return 0;
}
