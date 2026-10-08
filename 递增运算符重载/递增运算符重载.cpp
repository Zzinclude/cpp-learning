#include<iostream>
using namespace std;
class myint {
	friend ostream& operator<<(ostream& cout, myint a);
public:
	myint() {
		a = 0;
		b = 0;
	}
	myint& operator++() {
		a++;
		b++;
		return *this;
	}
	myint& operator++(int) {
		myint temp = *this;
		a++;b++;
		return temp;
	}
private:
	int a;
	int b;
};
ostream& operator<<(ostream& cout,myint a) {
	cout << "a="<<a.a;cout << "b="<< a.b;
	return cout;
}
void test0() {
	myint a;
	cout << a << endl;
}
void test1() {
	myint a;
	cout << ++a << endl;
}
void test2() {
	myint a;
	cout << a++ << endl;
}

int main() {
	test0();
	test1();
	test2();
	system("pause");
	return 0;
}