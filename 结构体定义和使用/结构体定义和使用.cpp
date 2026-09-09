#include<iostream>
#include<string>
using namespace std;
//1.结构体定义

struct Student
{
 //成员列表

 //1.姓名
	string name;
 //2.年龄
	int age;
 //3.分数
	int score;
}s3;//顺便创建一个结构体变量
int main() {
//2.通过学生类型创建具体学生
// //struct关键字可以省略，且仅在创建结构体变量时，定义结构体时不可以省略
//2.1 struct Student s1
struct Student s1;
s1.name = "张三";//.用来访问
s1.age = 18;
s1.score = 100;

cout << "姓名是：" << s1.name << endl;
cout << "年龄是：" << s1.age << endl;
cout << "分数是：" << s1.score << endl;

//2.2 struct Student s2={ ... }
struct Student s2 = { "李四",19,80 };
cout << "姓名是：" << s2.name << endl;
cout << "年龄是：" << s2.age << endl;
cout << "分数是：" << s2.score << endl;

//2.3 定义结构体时顺便创建结构体变量

//指针
Student* p = &s1;
//利用指针访问,用p->访问
cout << "姓名是：" << p->name << endl;
cout << "姓名是：" << (*p).name << endl;
	system("pause");
	return 0;
}