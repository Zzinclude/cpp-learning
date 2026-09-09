#include<iostream>
using namespace std;
struct hero {
	string name;
	int age;
	string sex;
};
void bubblesort(hero*heroarray,int length) {
	for (int i = 0;i < length - 1;i++) {
		for (int j = 0;j < length - i - 1;j++) {
			if (heroarray[j].age < heroarray[j + 1].age) {
				hero temp = heroarray[j];
				heroarray[j] = heroarray[j + 1];
				heroarray[j + 1] = temp;
			}
		}
	}

}
void print(hero* heroarray,int length) {
	for (int i = 0;i < length;i++) {
		cout << "第" << i + 1 << "个英雄名字是：" << heroarray[i].name << "\t年龄是：" << heroarray[i].age << "\t性别是：" << heroarray[i].sex << endl;
	}
}
int main() {
	//设计一个英雄结构体，包括姓名，那年龄， 性别，共五名。
	//冒泡排序，按年龄升序排列。
	hero heroarray[5] = {
	{ "刘备",23,"男" },
	{ "关羽",22,"男" },
	{ "张飞",20,"男" },
	{ "赵云",21,"男" },
	{ "貂蝉",19,"女" },
	};
	int length = sizeof(heroarray) / sizeof(heroarray[0]);
	bubblesort(heroarray, length);
	print(heroarray, length);
	system("pause");
	return 0;
}