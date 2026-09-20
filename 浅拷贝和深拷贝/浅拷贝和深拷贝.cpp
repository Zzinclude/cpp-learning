#include<iostream>
using namespace std;
class person {
public:
	int age;
	int* height;
	person() {
		cout << "person的默认构造函数" << endl;
	}
	person(int age1,int height1) {
		age = age1;
		height = new int(height1);
		cout << "person的有参构造函数" << endl;
	}
	person(const person &p) {
		age = p.age;
		height = new int(*p.height);
		cout << "person的拷贝构造函数" << endl;
	}
	~person() {
		if (height != NULL) {
			delete height;
			height = NULL;
		}
		cout << "person的析构函数的调用" << endl;
	}
};
int main() {
	person p(18,100);
	person p1(p);
	system("pause");
	return 0;
}