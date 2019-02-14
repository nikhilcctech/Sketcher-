// Sketcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include<math.h>
using namespace std;

double x, y, x2, y2,x3,y3,x4,y4,z,x5,y5,x6,y6,x7,y7,x8,y8,x9,y9,x10,y10,r;
double xx[1000];
double yy[1000];	
double pi=3.14;


void line()
{
	ofstream outputFile;
	outputFile.open("graphplot.dat");
	
	std::cout << "ENTERED SHAPE IS LINE\n";
	std::cout << "ENTER FIRST POINT OF LINE\n";
	std::cin >> x >> y;
	

	if (isalpha (x))
	{
		std::cout << "You have entered a wrong input\n";
		std::cout << "Please re-enter\n";
		
	}

	std::cout << "ENTER SECOND POINT OF LINE\n";
	std::cin >> x2 >> y2;
	std::cout << "THE FIRST POINT OF LINE IS :P1[" << x << "," << y << "]\n";
	std::cout << "THE LAST POINT OF LINE IS :P2[" << x2 << "," << y2 << "]\n";
	double a = (y2 - y);
	double b = (x2 - x);
	double i;
	int j;
	//std::cout << "m=" << m <<"\n";

	if (a == 0.0) //parallel to x axis
	{
		for (i = x, j = 0; i <= x2, j < 100; i = i + 0.01*(x2 - x), j++)
		{
			xx[j] = i;
			yy[j] = y;
			outputFile << " " << xx[j] << " " << yy[j] << " " << "\n";
		
			//std::cout << "xx["<<i<<"]"<< xx[i]<<"\n";

		}
	}

	else if (b == 0) //parallel to y axis
	{
		for (i = y, j = 0; i <= y2, j < 100; i = i + 0.01*(y2 - y), j++)
		{
			xx[j] = x;
			yy[j] = i;
			//std::cout << "xx["<<i<<"]"<< xx[i]<<"\n";
			outputFile << " " << xx[j] << " " << yy[j] << " " << "\n";

		}

	}

	else
	{
		for (i = x, j = 0; i <= x2, j < 100; i = i + 0.01*(x2 - x), j++)
		{
			xx[j] = i;
			//std::cout << "xx["<<i<<"]"<< xx[i]<<"\n";

		}

		for (i = x, j = 0; i <= x2, j <= 100; i = i + 0.01*(x2 - x), j++)
		{
			yy[j] = (a / b)*(i - x) + y;
			//std::cout << "yy[" << j << "]" << yy[j] << "\n";
		}

		for (i = x, j = 0; i <= x2, j < 100; i = i + 0.01*(x2 - x), j++)
		{
			outputFile << " " << i << " " << yy[j] << " " << "\n";
		}

	}
	outputFile.close();
}



void polygon()
{
	std::cout << "ENTERED SHAPE IS POLYGON\n";
	std::cout << "ENTERE NOS OF SIDES OF POLYGON\n";
	std::cin >> z;
	if (z == 3)
	{
		//triangle

		ofstream outputFile;
		outputFile.open("graphplot.dat");

		std::cout << "ENTERED SHAPE IS TRIANGLE\n";
		std::cout << "ENTER FIRST POINT OF TRIANGLE\n";
		std::cin >> x >> y;
		std::cout << "ENTER SECOND POINT OF TRIANGLE\n";
		std::cin >> x2 >> y2;
		std::cout << "ENTER THIRD POINT OF TRIANGLE\n";
		std::cin >> x3 >> y3;
		std::cout << "THE FIRST POINT OF TRIANGLE IS :P1[" << x << "," << y << "]\n";
		std::cout << "THE SECOND POINT OF TRIANGLE IS :P2[" << x2 << "," << y2 << "]\n";
		std::cout << "THE THIRD POINT OF TRIANGLE IS :P3[" << x3 << "," << y3 << "]\n";

		outputFile << " " << x << " " << y << " " << "\n";
		outputFile << " " << x2 << " " << y2 << " " << "\n";
		outputFile << " " << x3 << " " << y3 << " " << "\n";
		outputFile << " " << x << " " << y << " " << "\n";

	}


	else if (z == 4)
	{
		//rectangle
		ofstream outputFile;
		outputFile.open("graphplot.dat");

		std::cout << "ENTERED SHAPE IS RECTANGLE\n";
		std::cout << "ENTER FIRST POINT OF RECTANGLE\n";
		std::cin >> x >> y;
		std::cout << "ENTER SECOND POINT OF  RECTANGLE\n";
		std::cin >> x2 >> y2;
		std::cout << "ENTER THIRD POINT OF  RECTANGLE\n";
		std::cin >> x3 >> y3;
		std::cout << "ENTER FOURTH POINT OF  RECTANGLE\n";
		std::cin >> x4 >> y4;
		std::cout << "THE FIRST POINT OF  RECTANGLE IS :P1[" << x << "," << y << "]\n";
		std::cout << "THE SECOND POINT OF  RECTANGLE IS :P2[" << x2 << "," << y2 << "]\n";
		std::cout << "THE THIRD POINT OF RECTANGLE IS :P3[" << x3 << "," << y3 << "]\n";
		std::cout << "THE FOURTH POINT OF RECTANGLE IS :P4[" << x4 << "," << y4 << "]\n";

		outputFile << " " << x << " " << y << " " << "\n";
		outputFile << " " << x2 << " " << y2 << " " << "\n";
		outputFile << " " << x3 << " " << y3 << " " << "\n";
		outputFile << " " << x4 << " " << y4 << " " << "\n";
		outputFile << " " << x << " " << y << " " << "\n";

	}

	else if (z == 5)
	{
		//pentagon
		ofstream outputFile;
		outputFile.open("graphplot.dat");

		std::cout << "ENTERED SHAPE IS PENTAGON\n";
		std::cout << "ENTER FIRST POINT OF PENTAGON\n";
		std::cin >> x >> y;
		std::cout << "ENTER SECOND POINT OF PENTAGON\n";
		std::cin >> x2 >> y2;
		std::cout << "ENTER THIRD POINT OF PENTAGON\n";
		std::cin >> x3 >> y3;
		std::cout << "ENTER FOURTH POINT OF PENTAGON\n";
		std::cin >> x4 >> y4;
		std::cout << "ENTER FIFTH POINT OF PENTAGON\n";
		std::cin >> x5 >> y5;
		std::cout << "THE FIRST POINT OF PENTAGON IS :P1[" << x << "," << y << "]\n";
		std::cout << "THE SECOND POINT OF PENTAGON IS :P2[" << x2 << "," << y2 << "]\n";
		std::cout << "THE THIRD POINT OF PENTAGON IS :P3[" << x3 << "," << y3 << "]\n";
		std::cout << "THE FOURTH POINT OF PENTAGON IS :P4[" << x4 << "," << y4 << "]\n";
		std::cout << "THE FIFTH POINT OF PENTAGON IS :P5[" << x5 << "," << y5 << "]\n";

		outputFile << " " << x << " " << y << " " << "\n";
		outputFile << " " << x2 << " " << y2 << " " << "\n";
		outputFile << " " << x3 << " " << y3 << " " << "\n";
		outputFile << " " << x4 << " " << y4 << " " << "\n";
		outputFile << " " << x5 << " " << y5 << " " << "\n";
		outputFile << " " << x << " " << y << " " << "\n";

	}

	else if (z == 6)
	{
		//hexagon
		ofstream outputFile;
		outputFile.open("graphplot.dat");

		std::cout << "ENTERED SHAPE IS HEXAGON\n";
		std::cout << "ENTER FIRST POINT OF HEXAAGON\n";
		std::cin >> x >> y;
		std::cout << "ENTER SECOND POINT OF HEXAGON\n";
		std::cin >> x2 >> y2;
		std::cout << "ENTER THIRD POINT OF HEXAGON\n";
		std::cin >> x3 >> y3;
		std::cout << "ENTER FOURTH POINT OF HEXAGON\n";
		std::cin >> x4 >> y4;
		std::cout << "ENTER FIFTH POINT OF HEXAGON\n";
		std::cin >> x5 >> y5;
		std::cout << "ENTER SIXTH POINT OF HEXAGON\n";
		std::cin >> x6 >> y6;
		std::cout << "THE FIRST POINT OF HEXAGON IS :P1[" << x << "," << y << "]\n";
		std::cout << "THE SECOND POINT OF HEXAGON IS :P2[" << x2 << "," << y2 << "]\n";
		std::cout << "THE THIRD POINT OF HEXAGON IS :P3[" << x3 << "," << y3 << "]\n";
		std::cout << "THE FOURTH POINT OF HEXAGON IS :P4[" << x4 << "," << y4 << "]\n";
		std::cout << "THE FIFTH POINT OF HEXAGON IS :P5[" << x5 << "," << y5 << "]\n";
		std::cout << "THE SIXTH POINT OF HEXAGON IS :P6[" << x6 << "," << y6 << "]\n";

		outputFile << " " << x << " " << y << " " << "\n";
		outputFile << " " << x2 << " " << y2 << " " << "\n";
		outputFile << " " << x3 << " " << y3 << " " << "\n";
		outputFile << " " << x4 << " " << y4 << " " << "\n";
		outputFile << " " << x5 << " " << y5 << " " << "\n";
		outputFile << " " << x6 << " " << y6 << " " << "\n";
		outputFile << " " << x << " " << y << " " << "\n";

	}

	else if (z == 7)
	{
	//heptagon
	ofstream outputFile;
	outputFile.open("graphplot.dat");

	std::cout << "ENTERED SHAPE IS HEPTAGON\n";
	std::cout << "ENTER FIRST POINT OF HEPTAGON\n";
	std::cin >> x >> y;
	std::cout << "ENTER SECOND POINT OF HEPTAGON\n";
	std::cin >> x2 >> y2;
	std::cout << "ENTER THIRD POINT OF HEPTAGON\n";
	std::cin >> x3 >> y3;
	std::cout << "ENTER FOURTH POINT OF HEPTAGON\n";
	std::cin >> x4 >> y4;
	std::cout << "ENTER FIFTH POINT OF HEPTAGON\n";
	std::cin >> x5 >> y5;
	std::cout << "ENTER SIXTH POINT OF HEPTAGON\n";
	std::cin >> x6 >> y6;
	std::cout << "ENTER SEVENTH POINT OF HEPTAGON\n";
	std::cin >> x7 >> y7;
	std::cout << "THE FIRST POINT OF HEPTAGON IS :P1[" << x << "," << y << "]\n";
	std::cout << "THE SECOND POINT OF HEPTAGON IS :P2[" << x2 << "," << y2 << "]\n";
	std::cout << "THE THIRD POINT OF HEPTAGON IS :P3[" << x3 << "," << y3 << "]\n";
	std::cout << "THE FOURTH POINT OF HEPTAGON IS :P4[" << x4 << "," << y4 << "]\n";
	std::cout << "THE FIFTH POINT OF HEPTAGON IS :P5[" << x5 << "," << y5 << "]\n";
	std::cout << "THE SIXTH POINT OF HEPTAGON IS :P6[" << x6 << "," << y6 << "]\n";
	std::cout << "THE SEVENTH POINT OF HEPTAGON IS :P7[" << x7 << "," << y7 << "]\n";

	outputFile << " " << x << " " << y << " " << "\n";
	outputFile << " " << x2 << " " << y2 << " " << "\n";
	outputFile << " " << x3 << " " << y3 << " " << "\n";
	outputFile << " " << x4 << " " << y4 << " " << "\n";
	outputFile << " " << x5 << " " << y5 << " " << "\n";
	outputFile << " " << x6 << " " << y6 << " " << "\n";
	outputFile << " " << x7 << " " << y7 << " " << "\n";
	outputFile << " " << x << " " << y << " " << "\n";

	}

	else if (z == 8)
	{
	//octagon
	ofstream outputFile;
	outputFile.open("graphplot.dat");

	std::cout << "ENTERED SHAPE IS OCTAGON\n";
	std::cout << "ENTER FIRST POINT OF OCTAGON\n";
	std::cin >> x >> y;
	std::cout << "ENTER SECOND POINT OF OCTAGON\n";
	std::cin >> x2 >> y2;
	std::cout << "ENTER THIRD POINT OF OCTAGON\n";
	std::cin >> x3 >> y3;
	std::cout << "ENTER FOURTH POINT OF OCTAGON\n";
	std::cin >> x4 >> y4;
	std::cout << "ENTER FIFTH POINT OF OCTAGON\n";
	std::cin >> x5 >> y5;
	std::cout << "ENTER SIXTH POINT OF OCTAGON\n";
	std::cin >> x6 >> y6;
	std::cout << "ENTER SEVENTH POINT OF OCTAGON\n";
	std::cin >> x7 >> y7;
	std::cout << "ENTER EIGHTH POINT OF OCTAGON\n";
	std::cin >> x8 >> y8;
	std::cout << "THE FIRST POINT OF OCTAGON IS :P1[" << x << "," << y << "]\n";
	std::cout << "THE SECOND POINT OF OCTAGON IS :P2[" << x2 << "," << y2 << "]\n";
	std::cout << "THE THIRD POINT OF OCTAGON IS :P3[" << x3 << "," << y3 << "]\n";
	std::cout << "THE FOURTH POINT OF OCTAGON IS :P4[" << x4 << "," << y4 << "]\n";
	std::cout << "THE FIFTH POINT OF OCTAGON IS :P5[" << x5 << "," << y5 << "]\n";
	std::cout << "THE SIXTH POINT OF OCTAGON IS :P6[" << x6 << "," << y6 << "]\n";
	std::cout << "THE SEVENTH POINT OF OCTAGON IS :P7[" << x7 << "," << y7 << "]\n";
	std::cout << "THE EIGHTH POINT OF OCTAGON IS :P8[" << x8 << "," << y8 << "]\n";

	outputFile << " " << x << " " << y << " " << "\n"; 
	outputFile << " " << x2 << " " << y2 << " " << "\n";
	outputFile << " " << x3 << " " << y3 << " " << "\n";
	outputFile << " " << x4 << " " << y4 << " " << "\n";
	outputFile << " " << x5 << " " << y5 << " " << "\n";
	outputFile << " " << x6 << " " << y6 << " " << "\n";
	outputFile << " " << x7 << " " << y7 << " " << "\n";
	outputFile << " " << x8 << " " << y8 << " " << "\n";
	outputFile << " " << x << " " << y << " " << "\n";

	}
	else if (z == 9)
	{
	//nonagon
	ofstream outputFile;
	outputFile.open("graphplot.dat");

	std::cout << "ENTERED SHAPE IS NONAGON\n";
	std::cout << "ENTER FIRST POINT OF NONAGON\n";
	std::cin >> x >> y;
	std::cout << "ENTER SECOND POINT OF NONAGON\n";
	std::cin >> x2 >> y2;
	std::cout << "ENTER THIRD POINT OF NONAGON\n";
	std::cin >> x3 >> y3;
	std::cout << "ENTER FOURTH POINT OF NONAGON\n";
	std::cin >> x4 >> y4;
	std::cout << "ENTER FIFTH POINT OF NONAGON\n";
	std::cin >> x5 >> y5;
	std::cout << "ENTER SIXTH POINT OF NONAGON\n";
	std::cin >> x6 >> y6;
	std::cout << "ENTER SEVENTH POINT OF NONAGON\n";
	std::cin >> x7 >> y7;
	std::cout << "ENTER EIGHTH POINT OF NONAGON\n";
	std::cin >> x8 >> y8;
	std::cout << "ENTER NINTH POINT OF NONAGON\n";
	std::cin >> x9 >> y9;
	std::cout << "THE FIRST POINT OF NONAGON IS :P1[" << x << "," << y << "]\n";
	std::cout << "THE SECOND POINT OF NONAGON IS :P2[" << x2 << "," << y2 << "]\n";
	std::cout << "THE THIRD POINT OF NONAGON IS :P3[" << x3 << "," << y3 << "]\n";
	std::cout << "THE FOURTH POINT OF NONAGON IS :P4[" << x4 << "," << y4 << "]\n";
	std::cout << "THE FIFTH POINT OF NONAGON IS :P5[" << x5 << "," << y5 << "]\n";
	std::cout << "THE SIXTH POINT OF NONAGON IS :P6[" << x6 << "," << y6 << "]\n";
	std::cout << "THE SEVENTH POINT OF NONAGON IS :P7[" << x7 << "," << y7 << "]\n";
	std::cout << "THE EIGHTH POINT OF NONAGON IS :P8[" << x8 << "," << y8 << "]\n";
	std::cout << "THE NINTH POINT OF NONAGON IS :P9[" << x9 << "," << y9 << "]\n";

	outputFile << " " << x << " " << y << " " << "\n"; 
	outputFile << " " << x2 << " " << y2 << " " << "\n";
	outputFile << " " << x3 << " " << y3 << " " << "\n";
	outputFile << " " << x4 << " " << y4 << " " << "\n";
	outputFile << " " << x5 << " " << y5 << " " << "\n";
	outputFile << " " << x6 << " " << y6 << " " << "\n";
	outputFile << " " << x7 << " " << y7 << " " << "\n"; 
	outputFile << " " << x8 << " " << y8 << " " << "\n";
	outputFile << " " << x9 << " " << y9 << " " << "\n";
	outputFile << " " << x << " " << y << " " << "\n";

	}

	else if(z == 10)
	{
	//DECAgon
	ofstream outputFile;
	outputFile.open("graphplot.dat");

	std::cout << "ENTERED SHAPE IS DECAGON\n";
	std::cout << "ENTER FIRST POINT OF DECAGON\n";
	std::cin >> x >> y;
	std::cout << "ENTER SECOND POINT OF DECAGON\n";
	std::cin >> x2 >> y2;
	std::cout << "ENTER THIRD POINT OF DECAGON\n";
	std::cin >> x3 >> y3;
	std::cout << "ENTER FOURTH POINT OF DECAGON\n";
	std::cin >> x4 >> y4;
	std::cout << "ENTER FIFTH POINT OF DECAGON\n";
	std::cin >> x5 >> y5;
	std::cout << "ENTER SIXTH POINT OF DECAGON\n";
	std::cin >> x6 >> y6;
	std::cout << "ENTER SEVENTH POINT OF DECAGON\n";
	std::cin >> x7 >> y7;
	std::cout << "ENTER EIGHTH POINT OF DECAGON\n";
	std::cin >> x8 >> y8;
	std::cout << "ENTER NINTH POINT OF DECAGON\n";
	std::cin >> x9 >> y9;
	std::cout << "ENTER TENTH POINT OF DECAGON\n";
	std::cin >> x10 >> y10;
	std::cout << "THE FIRST POINT OF DECAGON IS :P1[" << x << "," << y << "]\n";
	std::cout << "THE SECOND POINT OF DECAGON IS :P2[" << x2 << "," << y2 << "]\n";
	std::cout << "THE THIRD POINT OF DECAGON IS :P3[" << x3 << "," << y3 << "]\n";
	std::cout << "THE FOURTH POINT OF DECAGON IS :P4[" << x4 << "," << y4 << "]\n";
	std::cout << "THE FIFTH POINT OF DECAGON IS :P5[" << x5 << "," << y5 << "]\n";
	std::cout << "THE SIXTH POINT OF DECAGON IS :P6[" << x6 << "," << y6 << "]\n";
	std::cout << "THE SEVENTH POINT OF DECAGON IS :P7[" << x7 << "," << y7 << "]\n";
	std::cout << "THE EIGHTH POINT OF DECAGON IS :P8[" << x8 << "," << y8 << "]\n";
	std::cout << "THE NINTH POINT OF DECAGON IS :P9[" << x9 << "," << y9 << "]\n";
	std::cout << "THE TENTH POINT OF DECAGON IS :P10[" << x10 << "," << y10 << "]\n";

	outputFile << " " << x << " " << y << " " << "\n";
	outputFile << " " << x2 << " " << y2 << " " << "\n";
	outputFile << " " << x3 << " " << y3 << " " << "\n";
	outputFile << " " << x4 << " " << y4 << " " << "\n";
	outputFile << " " << x5 << " " << y5 << " " << "\n";
	outputFile << " " << x6 << " " << y6 << " " << "\n";
	outputFile << " " << x7 << " " << y7 << " " << "\n";
	outputFile << " " << x8 << " " << y8 << " " << "\n";
	outputFile << " " << x9 << " " << y9 << " " << "\n";
	outputFile << " " << x << " " << y << " " << "\n";

	}


}

void circle()
{
	//circle
	ofstream outputFile;
	outputFile.open("circle.dat");
	std::cout << "ENTERED SHAPE IS CIRCLE\n";
	std::cout << "ENTER RADIUS OF CIRCLE\n";
	std::cin >> r;

	std::cout << "ENTER CENTER POINT OF CIRCLE\n";
	std::cin >> x >> y;
	outputFile << r;
	std::cout << "pi=\n"<<pi;

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
			xx[i] = (xx[i] - x);
			yy[i] = (yy[i] - y);

			yy[i] = (r*sin((i*pi) / 180));
			xx[i] = (r*cos((i*pi) / 180));
			outputFile << " " << xx[i] << " " << yy[i] << " " << "\n";
		}

	}

	
	
	ofstream file;
	outputFile.close();
	//cout << "hiii";
	system("gnuplot.exe -persist graphplotcircle.plt");
}

void plotFile()
{
	ofstream file;
	cout << "hiii";
	system("gnuplot.exe -persist graphplot.plt");
}

int main()
{
	int i;
	std::cout << "ENTER TYPE OF SHAPE: \n";
	std::cout << "TYPE 1:LINE \n";
	std::cout << "TYPE 2:POLYGON \n";
	std::cout << "TYPE 3:CIRCLE \n";
	

	std::cin >> i;
	//reenter:

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
			line();
			plotFile();
			break;

		case 2:
			polygon();
			plotFile();
			break;

		case 3:
			circle();
			break;


		}


		cout << "done\n";

		cout << "done 1\n";

		return 0;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
