#include"circle.h"

	void circle::setcenter(point setcenter) {
		center = setcenter;
	}
	void circle::setr(int setr) {
		r = setr;
	}
	point circle::getcenter() {
		return center;
	}
	int circle::getr() {
		return r;
	}