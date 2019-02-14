#include<iostream>
#include<stdio.h>
#include <fstream>
#include"line.h"
#include"polygon.h"
#include"circle.h"
//#include"plotFile.h"

using namespace std;

int main()
{
	int i;
	std::cout << "ENTER TYPE OF SHAPE: \n";
	std::cout << "TYPE 1:LINE \n";
	std::cout << "TYPE 2:POLYGON \n";
	std::cout << "TYPE 3:CIRCLE \n";
	std::cin >> i;

	if (i != 1 && i != 2 && i != 3)
	{
		std::cout << "You have entered a wrong input \n";
		std::cout << "Please re-enter a correct input \n";
		//goto reenter;
	}
	else
	{
		//std::cout << "writing output data file\n";
		switch (i)
		{

		case 1:
			line l;
			l.getdata();
			l.calculation();
			l.plotFile();
			break;

		case 2:
			polygon p;
			p.getdata();
			p.calculation();
			p.plotFile();
			break;

		case 3:
			circle c;
			c.getdata();
			c.calculation();
			c.plotFile();
			break;


		}


		std::cout << "done\n";

		std::cout << "done 1\n";

		return 0;


	}

	return 0;
}