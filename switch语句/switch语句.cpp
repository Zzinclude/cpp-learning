#include<iostream>
using namespace std;
int main() {
	/*给电影打分
	9-10分为经典电影
	7-8分为非常好
	5-6分为不错
	4分及以下为烂片*/
	int score = 0;
	cout << "请输入您对电影的打分：";
	cin >> score;
	switch (score) {
	case 10:
	case 9:cout << "您觉得电影是经典" << endl;break;
	case 8:
	case 7:cout << "您觉得电影非常好" << endl;break;
	case 6:
	case 5:cout << "您觉得电影不错" << endl;break;
	default:cout << "您觉得电影是烂片" << endl;
	}
	//结构清晰，不能表示区间（if语句），只能表示整型和字符。
	system("pause");
	return 0;
}