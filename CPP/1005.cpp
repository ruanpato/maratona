#include <iostream>
#include <iomanip>
//Average 1
using namespace std;

int main(){
	double a, b;
	cin >> a >> b;
	std::cout << std::fixed << std::setprecision(5)	<< "MEDIA = " << ((a*3.5)+(b*7.5))/11 << endl;

	return 0;
}
