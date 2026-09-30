#include<iostream>
using namespace std;
//cout属于ostream类，cin属于istream类
class person {
	friend ostream& operator<<(ostream & cout, person& p);
public:
	person(int a, int b) {
		this->a = a;
		this->b = b;
	}
private:
	int a;
	int b;
};
//实现cout<<p
ostream& operator<<(ostream& cout, person& p) {
	cout << "a=" << p.a << "\t";
	cout << "b=" << p.b ;
	return cout;//这样才能链式继续cout
}

void test0() {
	person p(10,20);
	cout << p << endl;
}
int main() {
	test0();
	system("pause");
	return 0;
}