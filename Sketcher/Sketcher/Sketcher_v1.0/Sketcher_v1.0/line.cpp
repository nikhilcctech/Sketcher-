//FUNCTION DEFINITIONS
#include<stdio.h>
#include <fstream>
#include "line.h"
using namespace std;

void line::getdata()

{
	std::cout << "ENTERED SHAPE IS LINE\n";
	std::cout << "ENTER FIRST POINT OF LINE\n";
	num = 0;
	std::cin >> x >> y;
	
	/*if (!( x >> y >> x1 >> y1 >> num))
	{
		std::cout << "You have entered a wrong input\n";
		std::cout << "Please re-enter\n";

	}*/

	std::cout << "ENTER SECOND POINT OF LINE\n";
	std::cin >> x1 >> y1;
	std::cout << "THE FIRST POINT OF LINE IS :P1[" << x << "," << y << "]\n";
	std::cout << "THE LAST POINT OF LINE IS :P2[" << x1 << "," << y1 << "]\n";
}
		
void line::calculation()
{
	ofstream outputFile;
	outputFile.open("graphplot.dat");

	double a = (y1 - y);
	double b = (x1 - x);

	if (a == 0.0) //parallel to x axis
	{
		for (i = x, j = 0; i <= x1, j < 100; i = i + 0.01*(x1 - x), j++)
		{
			xx[j] = i;
			yy[j] = y;
			outputFile << " " << xx[j] << " " << yy[j] << " " << "\n";

			//std::cout << "xx["<<i<<"]"<< xx[i]<<"\n";
		}
	}

	else if (b == 0) //parallel to y axis
	{
		for (i = y, j = 0; i <= y1, j < 100; i = i + 0.01*(y1 - y), j++)
		{
			xx[j] = x;
			yy[j] = i;
			//std::cout << "xx["<<i<<"]"<< xx[i]<<"\n";
			outputFile << " " << xx[j] << " " << yy[j] << " " << "\n";
		}

	}

	else
	{
		for (i = x, j = 0; i <= x1, j < 100; i = i + 0.01*(x1 - x), j++)
		{
			xx[j] = i;
			//std::cout << "xx["<<i<<"]"<< xx[i]<<"\n";
		}

		for (i = x, j = 0; i <= x1, j <= 100; i = i + 0.01*(x1 - x), j++)
		{
			yy[j] = (a / b)*(i - x) + y;
			//std::cout << "yy[" << j << "]" << yy[j] << "\n";
		}

		for (i = x, j = 0; i <= x1, j < 100; i = i + 0.01*(x1 - x), j++)
		{
			outputFile << " " << i << " " << yy[j] << " " << "\n";
		}

	}
	outputFile.close();
}

void line::plotFile()
{
	ofstream file;
	cout << "hiii";
	system("gnuplot.exe -persist graphplotline.plt");
}
		

		



	
	
