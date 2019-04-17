#include <iostream>
#include <iomanip>
//Fuel spent
using namespace std;

int main(){
	int timeS, velM;
	cin >> timeS >> velM;
	std::cout << std::fixed << std::setprecision(3) << ((float)velM*timeS)/12 << endl;

	return 0;
}
