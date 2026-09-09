#include<iostream>
using namespace std;
int main() {
	int a = 0;
	cout << "请为a赋值：";
	cin >> a;
	if (a > 100) {
		cout << "a>100" << endl;
		if (a > 200) {
			cout << "五档" << endl;
		}
		else if (a > 180) {
			cout << "四档" << endl;
		}
		else if (a > 160) {
			cout << "三档" << endl;
		}
		else if (a > 140) {
			cout << "二档" << endl;
		}
		else {
			cout << "无" << endl;
		}
	}
	else if (a > 50) {
		cout << "a>50" << endl;
	}
	else if (a > 30) {
		cout << "a>30" << endl;
	}
	else{
		cout << "a<30" << endl;
	}
	system("pause");
	return 0;
}