#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int qnt, i, j;
	char v[112], auxv[112];
	scanf("%d", &qnt);
	getchar();
	while(qnt--){
		memset(auxv, '\0', sizeof(auxv));
		fgets(v, 112, stdin);
		v[strlen(v)-1] = '\0';
		
		for(i = 0, j = strlen(v)/2-1; i <= strlen(v)/2-1; i++){
			auxv[i] = v[j];
			j--;
		}

		
		for(i = strlen(v)/2, j = strlen(v)-1; i < strlen(v); i++){
			auxv[i] = v[j];
			j--;
		}

		printf("%s\n", auxv);
	}

	return 0;
}