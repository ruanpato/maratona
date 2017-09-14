#include <iostream>
#include <iomanip>
//Salary with bonus
using namespace std;

int main(){
	char name[112];
	double salaryFix, pctSells;
	cin >> name >> salaryFix >> pctSells;
	std::cout << std::fixed << std::setprecision(2) << "TOTAL = R$ " << salaryFix+(pctSells*0.15) << endl;

	return 0;
}
