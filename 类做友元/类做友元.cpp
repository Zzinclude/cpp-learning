#include<iostream>
using namespace std;

class building;

class goodguy {
public:
	goodguy();
	void visit();
private:
	building * g_building;
};

class building {
	friend goodguy;
public:
	building();
	string sittingroom;
private:
	string bedroom;
};

building::building() {
	sittingroom = "客厅";
	bedroom = "卧室";
}

goodguy::goodguy() {
	g_building = new building;
}

void goodguy::visit() {
	cout << "好朋友在访问：" << g_building->sittingroom << endl;
	cout << "好朋友在访问：" << g_building->bedroom << endl;
}
void test() {
	goodguy g;
	g.visit();
}
int main() {
	test();
	system("pause");
	return 0;
}