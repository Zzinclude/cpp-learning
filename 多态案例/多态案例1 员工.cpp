#include<iostream>
using namespace std;
class employee {
public:
	virtual double calcsalary() = 0;
	virtual ~employee(){}
};
class hourlyworker :public employee {
public:
	int hours, rate;
	hourlyworker(int hours,int rate):hours(hours),rate(rate){}
	double calcsalary() override {return hours * rate;}
};
class salesman :public employee{
public:
	int base, sales;double commrate;
	salesman(int base, int sales, double commrate)
		:base(base), sales(sales), commrate(commrate) {}
	double calcsalary() override { return base + sales * commrate; }
};
class manager :public employee {
public:
	int fixedsalary;
	manager(int fixedsalary):fixedsalary(fixedsalary){}
	double calcsalary()override { return fixedsalary; }
};
int main() {
	hourlyworker a(160, 50);
	salesman b(5000, 100000, 0.08);
	manager c(20000);
	employee* emp[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++) {
		cout<<"员工"<<i+1<<"的工资为："<< emp[i]->calcsalary()<<endl;
	}
	system("pause");
	return 0;
}