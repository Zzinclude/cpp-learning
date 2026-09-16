#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class circle {
public:
	void setcenter(point setcenter);
	void setr(int setr);
	point getcenter();
	int getr();

private:
	int r;
	point center;
};