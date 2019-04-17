#include <iostream>
#include <iomanip>
//Consumption
using namespace std;

int main(){
	int x;
	double y;
	cin >> x >> y;
	std::cout << std::fixed << std::setprecision(3) << x/y << " km/l" << endl;

	return 0;
}
