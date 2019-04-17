#include <iostream>
#include <iomanip>
//Area of a circle
using namespace std;

int main(){
	double r;
	cin >> r;
	std::cout << std::fixed << std::setprecision(4) << "A=" << 3.14159*(r*r) << endl;	

	return 0;
}
