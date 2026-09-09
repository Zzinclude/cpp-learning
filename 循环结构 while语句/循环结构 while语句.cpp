#include<iostream>
using namespace std;
int main() {
	//while输出从0-9
	int num = 0;
	while (num  <10) {
		cout << num << endl;
		++num;
	}
	//do...while输出0-9
	int num1 = 0;
	do {
		cout << num1 << endl;
		num1++;
	} while (num1 < 10);
	system("pause");
	return 0;
}