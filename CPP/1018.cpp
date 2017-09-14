#include <iostream>
//Banknotes
using namespace std;

int main(){
	int value,i;
	cin >> value;
	cout << value << endl;
	for(i = 0;value >= 100;value -= 100){
		i++;
	}cout << i << " nota(s) de R$ 100,00" << endl;
	for(i = 0;value >= 50;value -= 50){
		i++;
	}cout << i << " nota(s) de R$ 50,00" << endl;
	for(i = 0;value >= 20;value -= 20){
		i++;
	}cout << i << " nota(s) de R$ 20,00" << endl;
	for(i = 0;value >= 10; value -= 10){
		i++;
	}cout << i << " nota(s) de R$ 10,00" << endl;
	for(i = 0;value >= 5; value -= 5){
		i++;
	}cout << i << " nota(s) de R$ 5,00" << endl;
	for(i = 0;value >= 2; value -= 2){
		i++;
	}cout << i << " nota(s) de R$ 2,00" << endl;
	for(i = 0;value >= 1; value -= 1){
		i++;
	}cout << i << " nota(s) de R$ 1,00" << endl;
	
	
	return 0;
}
