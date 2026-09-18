#include<iostream>
using namespace std;
//对象的初始化和清理

class person{
public:
	//1.构造函数 进行初始化操作
	/*1.没有返回值 不用写void
	  2.函数名和类名相同
	  3.构造函数可以有参数，能发生重载
	  4.创建对象时，构造函数自动调用，且只调用一次*/
	person() {
		cout << "person的构造函数调用" << endl;
	}
	//2.析构函数 进行清理操作
	/*1.没有返回值，不用写void
	  2.函数名和类名相同，名称前加~
	  3.析构函数不能有参数，不可以发生重载
	  4.对象销毁前，自动调用析构函数，且只调用一次*/
	~person() {
		cout << "person的析构函数调用" << endl;
	}
};
void test01() {
	person p1;//栈上数据，test01调用完成后，自动运行析构函数释放
}

int main(){
	test01();
	person p2;
	system("pause");
	return 0;
	}