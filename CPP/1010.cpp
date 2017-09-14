#include <iostream>
#include <iomanip>
//Simple calculate
using namespace std;

int main(){
	int codP1, codP2, qtdP1, qtdP2;
	double pricP1, pricP2;
	cin >> codP1 >> qtdP1 >> pricP1 >> codP2 >> qtdP2 >> pricP2;
	std::cout << std::fixed << std::setprecision(2) << "VALOR A PAGAR: R$ " << qtdP1*pricP1 + qtdP2*pricP2 << endl;

	return 0;
}
