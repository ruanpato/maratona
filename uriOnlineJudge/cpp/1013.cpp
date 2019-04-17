#include <iostream>
//The greatest
using namespace std;

int ehmaior(int a,int b){
	int maior;
	maior = (a+b+abs(a-b))/2;
	return maior;
}


int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << ehmaior(a,ehmaior(b,c)) << " eh o maior" << endl;

	return 0;
}
