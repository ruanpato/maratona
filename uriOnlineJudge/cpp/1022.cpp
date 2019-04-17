#include <iostream>
#include <stdio.h>
//TDA Rational
using namespace std;

int main(){
	int N, N1, N2, D1, D2;
	char Op;
	scanf("%d",&N);
	while(N--){
		scanf("%d / %d %c %d / %d", &N1, &D1, &N2, &D2);
		cout << N1 << " / " << D1 << " " << Op << " " << N2 << " / " << D2 << endl;
	}

	return 0;
}
