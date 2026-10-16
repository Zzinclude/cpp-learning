#include<iostream>
using namespace std;
class animal {
public:
	int m_age;
};
class sheep: virtual public animal {};
class tuo : virtual public animal {};
class sheeptuo:public sheep,public tuo{};
void test() {
	sheeptuo st;
	st.m_age = 20;
	cout << "st.m_sge=" << st.m_age << endl;
}
int main() {
	test();
	system("pause");
	return 0;
}