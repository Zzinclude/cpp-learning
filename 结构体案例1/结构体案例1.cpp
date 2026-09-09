#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//学生结构体定义：
struct student {
	string sname;
	int score;
};
//老师结构体定义：
struct teacher {
	string tname;
	student S [5];
};
void allocatespace(teacher T [], int length) {
	string nameseed = "ABCDE";
	for (int i = 0;i < length;i++) {
		T[i].tname = "Teacher_";
		T[i].tname += nameseed[i];
		for (int j = 0;j < 5;j++) {
			T[i].S[j].sname = "Student_";
			T[i].S[j].sname += nameseed[j];
			int random = rand() % 61 + 40;//40--100
			T[i].S[j].score = random;
		}
	}
}
//打印所有信息
void printinfo(teacher T[], int length) {
	for (int i = 0;i < length;i++) {
		cout << "第" << i+1 << "个老师的名字是：" << T[i].tname << endl;
		for (int j = 0;j < 5;j++) {
			cout << "\t第" << j+1 << "个学生是" << T[i].S[j].sname << "\t" << "成绩是：" << T[i].S[j].score << endl;
		}
		cout << "\n";
	}
}
int main() {
	srand((unsigned int)time(NULL));
	//创建三名老师数组
	teacher T[3];
	//通过函数给老师信息赋值，并给老师带的学生赋值
	int length = sizeof(T) / sizeof(T[0]);
	allocatespace(T, length);
	//打印所有老师及所带学生信息
	printinfo(T, length);
	system("pause");
	return 0;
}