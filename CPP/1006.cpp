#include <iostream>
#include <iomanip>
//Average 2
using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	std::cout << std::fixed << std::setprecision(1) << "MEDIA = " << (a*0.2+b*0.3+c*0.5) << endl;

	return 0;
}
