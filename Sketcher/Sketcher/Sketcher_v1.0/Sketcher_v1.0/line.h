#pragma once
//FUNCTION DECLARATION

#include<iostream>
#include<fstream>
using namespace std;

#ifndef line__H
#define line_H


class line 
{
public:
	void getdata();
	void calculation();
	void plotFile();

	

private:
	double x , y , x1 , y1 , a , b ,i;  
	double xx[1000];
	double yy[1000];
	double num;
	int j;
	

};




#endif