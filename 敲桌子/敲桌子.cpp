#include<iostream>
using namespace std;

int main(){
	//输出1-100的数字，当数字含有7或为7的倍数时输出敲桌子，其余输出数字
	for (int num = 1;num < 101;num++) {
		if (num%7 == 7) {
			cout << "敲桌子" << endl;
		}
		else if (num % 10 == 7) {
			cout << "敲桌子" << endl;
		}
		else  if (num / 10 == 7) {
			cout << "敲桌子" << endl;
		}
		else { cout << num << endl; }
	}
	system("pause");
	return 0;
}