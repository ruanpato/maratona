#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int qnt, i, auxI;
	char v[1123], auxV[1123];
	scanf("%d", &qnt);
	getchar();
	while(qnt--){
		fgets(v, 1123, stdin);
		v[strlen(v) - 1] = '\0';

		for(i = 0, auxI = strlen(v)-1; i < strlen(v); i++){
			auxV[auxI] = isalpha(v[i]) ? v[i]+3 : v[i];
			auxI--;
		}
		for(i = strlen(v)/2; i < strlen(v); i++)
			auxV[i] = auxV[i]-1;

		for(i = 0; i < strlen(v); i++)
			printf("%c", auxV[i]);
		printf("\n");
	}

	return 0;
}