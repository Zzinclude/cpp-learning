#include<iostream>
#include <windows.h> // 1. 引入 Windows 头文件
using namespace std;

int main() {
    // 2. 在 main 函数开头强制设置控制台输出编码为 UTF-8
    SetConsoleOutputCP(65001);

    //选择结构 单行if语句
    //如果高考分数大于600分，输出考上一本大学
    int a = 0;
    cout << "请输入您的高考分数：" << endl;
    cin >> a;
    cout << "您的高考分数为: " << a << endl;
    if (a > 600)
    {
        cout << "恭喜您考上一本大学！" << endl;
    }

    system("pause");
    return 0;
}