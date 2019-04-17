#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, div, i;
	char m[112345];
	while(scanf("%d %s", &n, m) != EOF){
		div = 0;
		for(i = 0; i < strlen(m); i++)
			div += m[i]-48;
		printf("%d %s", div, div%3 == 0 ? "sim\n" : "nao\n");
	}

	return 0;
}