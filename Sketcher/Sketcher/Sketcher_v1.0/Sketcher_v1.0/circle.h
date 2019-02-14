#pragma once
#include <math.h>
#include<iostream>

#ifndef circle_H
#define circle_H

class circle{

public:
	void getdata();
	void calculation();
	void plotFile();

private:
	double x, y, r, i, pi=3.14,num;
	double xx[1000];
	double yy[1000];

};


#endif // !circle_H
