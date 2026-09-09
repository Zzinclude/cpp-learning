#include<iostream>
using namespace std;
int main() {
	for (int a = 1;a < 10;a++) {
		for (int b = 1;b <= a;b++) {
			cout << b << "*" << a << "=" << a * b << "\t";	
		}cout << "\n";
	}
	system("pause");
	return 0;
}