#include<iostream>
#include<string>
using namespace std;
//1.定义一个结构体
struct Student {
	string name;
	int age;
	int score;
};
int main() {
//2.创建结构体数组
	Student arr[] = {
		{"张三",18,100},
		{"李四",199,80},
		{"王五",20,60}
	};
//3.给结构体数组中的元素赋值
	arr[0].name = "卢本伟";
//4.遍历结构体数组
	for (int a = 0;a < 3;a++) {
		cout << "姓名：" << arr[a].name<<"\t";
		cout << "年龄：" << arr[a].age <<"\t";
		cout << "分数：" << arr[a].score << endl;
	}
	system("pause");
	return 0;
}