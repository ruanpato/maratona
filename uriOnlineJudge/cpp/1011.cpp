#include <iostream>
#include <iomanip>
#include <cmath>
//Sphere
using namespace std;

int main(){
	int r;
	cin >> r;
	std::cout << std::fixed << std::setprecision(3) << "VOLUME = " << (4/3.0)*3.14159*pow(r,3) << endl; 

	return 0;
}
