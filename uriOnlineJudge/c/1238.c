#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int qnt, aux, i;
	char v0[51], v1[51];
	scanf("%d", &qnt);
	while(qnt--){
		scanf("%s %s", v0, v1);
		aux = strlen(v0) + strlen(v1);
		for(i = 0; i < aux; i++){
			if(i < strlen(v0))
				printf("%c", v0[i]);
			if(i < strlen(v1))
				printf("%c", v1[i]);
		}printf("\n");
	}

	return 0;
}