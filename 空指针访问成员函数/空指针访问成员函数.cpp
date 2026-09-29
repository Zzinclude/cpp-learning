#include<iostream>
using namespace std;
class person {
public:
	void showperson() {
		cout << "this is person class." << endl;
	}

	void showage() {
		if (this == NULL) {
			return;
		}
		cout << "age=" <<this-> age << endl;
	}
	int age;
};
void test01() {
	person* p = NULL;
	p->showperson();
	p->showage();
}

int main() {
	test01();
	system("pause");
	return 0;
}