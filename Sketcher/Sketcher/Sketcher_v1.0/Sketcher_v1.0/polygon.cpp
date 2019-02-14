#include "polygon.h"
#include <fstream>

using namespace std;

void polygon::getdata()
{
	digit = 0;
	std::cout << "ENTERED SHAPE IS POLYGON\n";
	std::cout << "ENTER NOS OF SIDES OF POLYGON\n";
	std::cin >> z;
	
}

void polygon::calculation()
{
	/*if (!(cin >> z >> digit))
	{
		std::cout << "You have entered a wrong input\n";
		std::cout << "Please re-enter\n";
	}*/
	//else {
		
		num = 0;
		if (z == 3)
		{
			//triangle

			ofstream outputFile;
			outputFile.open("graphplot.dat");
			std::cout << "ENTERED SHAPE IS TRIANGLE\n";

			std::cout << "ENTER FIRST POINT OF TRIANGLE\n";

			std::cin >> x >> y;

			/*if (!(cin >> x >> y >> num))
			{
				std::cout << "You have entered a wrong input\n";
				std::cout << "Please re-enter\n";
			}*/
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
			num = 0;
			//rectangle
			ofstream outputFile;
			outputFile.open("graphplot.dat");

			std::cout << "ENTERED SHAPE IS RECTANGLE\n";
			std::cout << "ENTER FIRST POINT OF RECTANGLE\n";
			std::cin >> x >> y;
			/*if (!(cin >> x >> y >> x1 >> y1 >> num))
			{
				std::cout << "You have entered a wrong input\n";
				std::cout << "Please re-enter\n";

			}*/
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
			num = 0;
			//pentagon
			ofstream outputFile;
			outputFile.open("graphplot.dat");

			std::cout << "ENTERED SHAPE IS PENTAGON\n";
			std::cout << "ENTER FIRST POINT OF PENTAGON\n";
			std::cin >> x >> y;
			/*if (!(cin >> x >> y >> x1 >> y1 >> num))
			{
				std::cout << "You have entered a wrong input\n";
				std::cout << "Please re-enter\n";

			}*/
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
			num = 0;
			//hexagon
			ofstream outputFile;
			outputFile.open("graphplot.dat");

			std::cout << "ENTERED SHAPE IS HEXAGON\n";
			std::cout << "ENTER FIRST POINT OF HEXAAGON\n";
			std::cin >> x >> y;
			/*if (!(cin >> x >> y >> x1 >> y1 >> num))
			{
				std::cout << "You have entered a wrong input\n";
				std::cout << "Please re-enter\n";

			}*/
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
			num = 0;
			//heptagon
			ofstream outputFile;
			outputFile.open("graphplot.dat");

			std::cout << "ENTERED SHAPE IS HEPTAGON\n";
			std::cout << "ENTER FIRST POINT OF HEPTAGON\n";
			std::cin >> x >> y;
			/*if (!(cin >> x >> y >> x1 >> y1 >> num))
			{
				std::cout << "You have entered a wrong input\n";
				std::cout << "Please re-enter\n";
			}*/
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
			num = 0;
			//octagon
			ofstream outputFile;
			outputFile.open("graphplot.dat");

			std::cout << "ENTERED SHAPE IS OCTAGON\n";
			std::cout << "ENTER FIRST POINT OF OCTAGON\n";
			std::cin >> x >> y;
			/*if (!(cin >> x >> y >> x1 >> y1 >> num))
			{
				std::cout << "You have entered a wrong input\n";
				std::cout << "Please re-enter\n";
			}*/
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
			num = 0;
			//nonagon
			ofstream outputFile;
			outputFile.open("graphplot.dat");

			std::cout << "ENTERED SHAPE IS NONAGON\n";
			std::cout << "ENTER FIRST POINT OF NONAGON\n";
			std::cin >> x >> y;
			/*if (!(cin >> x >> y >> x1 >> y1 >> num))
			{
				std::cout << "You have entered a wrong input\n";
				std::cout << "Please re-enter\n";
			}*/
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

		else if (z == 10)
		{
			num = 0;
			//DECAgon
			ofstream outputFile;
			outputFile.open("graphplot.dat");

			std::cout << "ENTERED SHAPE IS DECAGON\n";
			std::cout << "ENTER FIRST POINT OF DECAGON\n";
			std::cin >> x >> y;
			/*if (!(cin >> x >> y >> x1 >> y1 >> num))
			{
				std::cout << "You have entered a wrong input\n";
				std::cout << "Please re-enter\n";
			}*/
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


//}


void polygon::plotFile()
{
	ofstream file;
	cout << "hiii";
	system("gnuplot.exe -persist graphplotline.plt");
}


	
	


	





