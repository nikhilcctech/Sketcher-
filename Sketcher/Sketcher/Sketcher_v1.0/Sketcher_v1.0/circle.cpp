#include"circle.h"
#include<stdio.h>
#include <fstream>
using namespace std;


void circle::getdata()
{
	num = 0;
	//circle
	ofstream outputFile;
	outputFile.open("circle.dat");
	std::cout << "ENTERED SHAPE IS CIRCLE\n";
	std::cout << "ENTER RADIUS OF CIRCLE\n";
	std::cin >> r;
	/*if (!(cin >> r >> num))
	{
		std::cout << "You have entered a wrong input\n";
		std::cout << "Please re-enter\n";
	}*/
	std::cout << "ENTER CENTER POINT OF CIRCLE\n";
	std::cin >> x >> y;
	outputFile << r;
	//std::cout << "pi=\n" << pi;
}


void circle::calculation()
{
	ofstream outputFile;
	outputFile.open("circle.dat");

	if (x == 0 && y == 0)
	{
		for (int i = 0; i <= 360; i++)
		{
			yy[i] = (r*sin((i*pi) / 180));
			xx[i] = (r*cos((i*pi) / 180));
			outputFile << " " << xx[i] << " " << yy[i] << " " << "\n";
		}
	}

	else
	{
	
		for (int i = 0; i <= 360; i++)
		{
			yy[i] = (r*sin((i*pi) / 180)- y);
			xx[i] = (r*cos((i*pi) / 180)-x);
			outputFile << " " << xx[i] << " " << yy[i] << " " << "\n";
		}

	}

	outputFile.close();
	
}


void circle::plotFile()
{
	ofstream file;
	cout << "hiii";
	system("gnuplot.exe -persist graphplotcircle.plt");
}

	

	




	



