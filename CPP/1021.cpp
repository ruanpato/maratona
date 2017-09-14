#include <iostream>
#include <stdio.h>
//Banknotes and coins
using namespace std;

int main(){
	int intg, dcml;
	scanf("%d.%d",&intg,&dcml);
	cout << "NOTAS:\n" << intg/100 << " nota(s) de R$ 100.00\n" 
	<< (intg%100)/50 << " nota(s) de R$ 50.00\n" 
	<< ((intg%100)%50)/20 << " nota(s) de R$ 20.00\n" 
	<< (((intg%100)%50)%20)/10 << " nota(s) de R$ 10.00\n" 
	<< ((((intg%100)%50)%20)%10)/5 << " nota(s) de R$ 5.00\n" 
	<< (((((intg%100)%50)%20)%10)%5)/2 << " nota(s) de R$ 2.00\n" 
	<< "MOEDAS:\n" 
	<< (((((intg%100)%50)%20)%10)%5)%2 << " moeda(s) de R$ 1.00\n" 
	<< dcml/50 << " moeda(s) de R$ 0.50\n" 
	<< (dcml%50)/25 << " moeda(s) de R$ 0.25\n" 
	<< ((dcml%50)%25)/10 << " moeda(s) de R$ 0.10\n" 
	<< (((dcml%50)%25)%10)/5 << " moeda(s) de R$ 0.05\n" 
	<< ((((dcml%50)%25)%10)%5) << " moeda(s) de R$ 0.01" << endl;
 
	return 0;
}