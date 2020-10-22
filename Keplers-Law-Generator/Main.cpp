
#include <iostream>
#include<fstream>
using namespace std;
void stepByStepCalculator(double period, double radius, string planet);
int main()
{
	stepByStepCalculator(88.0, 57.9, "Mercury");
	stepByStepCalculator(224.7, 108.2, "Venus");
	stepByStepCalculator(365.2, 149.6, "Earth");
	stepByStepCalculator(687.0, 227.9, "Mars");
	stepByStepCalculator(4331, 778.6, "Jupiter");
	stepByStepCalculator(10474, 1433.5, "Saturn");
	stepByStepCalculator(30589, 2872.5, "Uranus");
	stepByStepCalculator(59800, 4495.7, "Neptune");
	stepByStepCalculator(90560, 5906.4, "Pluto");
	return 0;
}

void stepByStepCalculator(double period, double radius, string planet)
{
	ofstream myfile;
	myfile.open("Astronomy.txt", ios_base::app);
	myfile << planet << '\n';
	myfile << "\\begin{align*}\n";
	myfile << "&\\frac{R^3}" << "{T^2}" << "\\\\" << '\n';
	myfile << "&=\\frac{" << radius << "^3}" << "{" << period << "^2}" << "\\\\" << '\n';
	myfile << "&=" << round((pow(radius, 3) / pow(period, 2))*10)/10 << "\\\\" << '\n';
	myfile << "\\end{align*}\n";
	myfile.close();
}