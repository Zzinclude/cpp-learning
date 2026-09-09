#include<iostream>
#include<string>
#define max 1000
using namespace std;
//我是胡思宇，于2026/9/2 21:06完成该项目。
//封装函数void showmenu，在main函数中调用。
//菜单界面
void showmenu(){
	cout << "通讯录系统：" << endl;
	cout << "\t1.添加联系人" << endl;
	cout << "\t2.显示联系人" << endl;
	cout << "\t3.删除联系人" << endl;
	cout << "\t4.查找联系人" << endl;
	cout << "\t5.修改联系人" << endl;
	cout << "\t6.清空联系人" << endl;
	cout << "\t0.退出通讯录" << endl;
}
struct person {
	string name;
	int sex;//1.男2.女
	int age;
	string phone;
	string addr;
};
struct adressbooks {
	person personarray[max];
	int size;//通讯录中人个数
};
//1. 添加联系人
void addperson(adressbooks * abs){
	//先判断联系人满了没有
	if (abs->size >= max) {
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else {
		//1.姓名
		string name;
		cout << "请输入姓名：";cin >> name;
		abs->personarray[abs->size].name=name;
		//2.性别（1.男  2.女）
		int sex=0;
		cout << "请输入你的性别(1.男 2.女)：";
		while (true) {
			cin >> sex;
			if (sex == 1 ||sex==2) {
			abs->personarray[abs->size].sex=sex;
			break;
		}
			cout << "输出有误，请重新输入！";
		}
		//3.年龄
		int age=0;
		cout << "请输入年龄：";
		while (true) {
			cin >> age;
			if (age < 120) {
				abs->personarray[abs->size].age = age;
				break;
			}
			cout << "年龄过大，请重新输入：";
		}
		//4.电话
		string phone="0";
		int length = 0;
		cout << "请输入电话：";
		while (true) {
			cin >> phone;
			length = phone.length();
			if (length ==11) {
				abs->personarray[abs->size].phone = phone;
				break;
			}
			cout << "输入有误，请重新输入：";
		}
		//5.住址
		string adress = "0";
		cout << "请输入住址 ：";cin >> adress;
		abs->personarray[abs->size].addr = adress;
		//更新通讯录人数
		abs->size ++;
		cout << "添加成功！" << endl;
		system("pause");//按任意键继续
		system("cls");//清屏操作
	}
}
//2.显示联系人
void showperson(adressbooks * abs) {
	//判断通讯录人数是否为0
	if (abs->size == 0) {
		cout << "当前记录为空！" << endl;
	}
	else {
		for (int i = 0;i < abs->size;i++) {
			cout << "姓名；" << abs->personarray[i].name
				<< "\t性别：" << (abs->personarray[i].sex==1?"男":"女")
				<< "\t年龄：" << abs->personarray[i].age
				<< "\t电话：" << abs->personarray[i].phone
				<< "\t地址：" << abs->personarray[i].addr 
				<< endl;
		}
	}
	system("pause");
	system("cls");
}
//3.1检测联系是否存在，存在则返回具体位置，不存在则返回-1
int isexist(adressbooks* abs,string name) {
	for (int i = 0;i < abs->size;i++) {
		if (abs->personarray[i].name == name) {
			return i;
		}
	}
	return -1;
}
//3.2删除联系人
void deleteperson(adressbooks* abs) {
	cout << "请输入要删除的联系人：";
	string name;cin >> name;
	int temp = isexist(abs, name);
	if (temp != -1) {
		for (int i = temp;i < abs->size;i++) {
			abs->personarray[i] = abs->personarray[i + 1];
		}
		abs->size--;
		cout << "删除成功！" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "查无此人！" << endl;
		system("pause");
		system("cls");
	}
}
//4.查找联系人
void searchperson(adressbooks * abs) {
	cout << "请输入要查找的联系人：";
	string name;cin >> name;
	int temp = isexist(abs, name);
	if (temp!=-1) {
		cout << "找到此人！" << endl;
		cout << "姓名 ：" << abs->personarray[temp].name
			<< "\t性别：" << (abs->personarray[temp].sex == 1 ? "男" : "女")
			<< "\t年龄：" << abs->personarray[temp].age
			<< "\t电话：" << abs->personarray[temp].phone
			<< "\t住址：" << abs->personarray[temp].addr << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "查无此人！" << endl;system("pause");
		system("cls");
	}
}
//5.修改联系人
void changeperson(adressbooks * abs){
	if (abs->size != 0) {
		cout << "请输入要修改的联系人：";
	string name;
	while (true) {
		cin >> name;
	int temp = isexist(abs, name);
	if (temp!=-1) {
		cout << "找到此人！" << endl;
		cout << "姓名 ：" << abs->personarray[temp].name
			<< "\t性别：" << (abs->personarray[temp].sex == 1 ? "男" : "女")
			<< "\t年龄：" << abs->personarray[temp].age
			<< "\t电话：" << abs->personarray[temp].phone
			<< "\t住址：" << abs->personarray[temp].addr << endl;
		//姓名
		cout << "请输入要修改的姓名：";
		string newname;cin >> newname;abs->personarray[temp].name = newname;
		//性别
		cout << "请输入要修改的性别（1.男 2.女）：";
		while (true) {
			int newsex;cin >> newsex;
			if (newsex == 1 || newsex == 2) {
				abs->personarray[temp].age = newsex;
				break;
			}
			cout << "输入有误，请重新输入：";
		}
		//年龄
		cout << "请输入要修改的年龄：";
		while (true) {
			int newage;cin >> newage;
			if (newage < 120) {
				abs->personarray[temp].age = newage;
				break;
			}
			cout << "输入有误，请重新输入：";
		}
		//电话
		cout << "请输入要修改的电话：";
		int length;string newphone = "0";
		while (true) {
			cin >> newphone;
			length = newphone.length();
			if (length == 11) {
				abs->personarray[temp].phone = newphone;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入：";
			}
		}
		//地址
		cout << "请输入要修改的地址：";
		string newadress;cin >> newadress;
		abs->personarray[temp].addr = newadress;
		cout << "修改完成！" << endl;
		system("pause");
		system("cls");
		break;
	}
	else
	{
		cout << "查无此人，请重新输入：";
	}
	}
	}
	else
	{
		cout << "通讯录没有联系人，请先添加！" << endl;
		system("pause");
		system("cls");
	}
}
//6.清空通讯录
void cleanallperson(adressbooks * abs) {
	cout << "确认是否清空通讯录（1.确认 2.取消）：";
	while (true) {
	int select;cin >> select;
	if (select == 1) {
	abs->size = 0;
	cout << "清空成功！" << endl;
	system("pause");
	system("cls");
	break;
	}
	else if (select == 2) {
		cout << "取消清空联系人" << endl;
		system("pause");
		system("cls");
		break;
	}
	else
	{
		cout << "输入有误，请重新输入：";
	}
	}
}
int main() {
	//创建通讯录结构体变量
	adressbooks abs;
	//初始化通讯录中人数
	abs.size = 0;
	int select = 0;
	while (true) {
	//调用菜单
	showmenu();
	cin >> select;
	switch (select) {
	case 1://1.添加联系人
		addperson(&abs);
		break;
	case 2://2.显示联系人
		showperson(&abs);
		break;
	case 3://3.删除联系人
		deleteperson(&abs);
	//switch语句中case太长需要用{}括起来，否则报错
		break;
	case 4://4.查找联系人
		searchperson(&abs);
		break;
	case 5://5.修改联系人
		changeperson(&abs);
		break;
	case 6://6.清空联系人
		cleanallperson(&abs);
		break;
	case 0://0.退出通讯录
		cout << "欢迎下次使用！" << endl;
		system("pause");
		return 0;
		break;
	default:
		break;
	}
	}
	system("pause");
	return 0;
}