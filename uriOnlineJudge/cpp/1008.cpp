#include <iostream>
#include <iomanip>
//Salary
using namespace std;

int main(){
	int number, hours;
	double salaryPhour;
	cin >> number >> hours >> salaryPhour;
	std::cout << std::fixed << std::setprecision(2) << "NUMBER = " << number << "\nSALARY = U$ " << salaryPhour*hours << endl;

	return 0;
}
