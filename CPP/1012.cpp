#include <iostream>
#include <iomanip>
//Area
using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	std::cout << std::fixed << std::setprecision(3) << "TRIANGULO: " << (a*c)/2 << "\nCIRCULO: " << 3.14159*(c*c) << "\nTRAPEZIO: " << ((a+b)*c)/2 << "\nQUADRADO: " << b*b << "\nRETANGULO: " << a*b << endl;

	return 0;
}
