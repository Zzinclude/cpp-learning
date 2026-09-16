#pragma once
#include<iostream>
using namespace std;

class point {
public:
	void setx(int x);
	void sety(int y);
	int getx();
	int gety();
private:
	int x0;
	int y0;
};