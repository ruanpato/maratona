#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int a,b,c;
	int qnt, i, equal, auxI;
	char v0[1123], v1[1123], v2[1123];
	scanf("%d", &qnt);
	getchar();
	while(qnt--){
		memset(v2, '\0',sizeof(v2));
		equal = 0;
		scanf("%s", v0);
		scanf("%s", v1);
		if(strlen(v0) == strlen(v1)){
			if(strcmp(v0, v1) == 0)
				equal = 1;
		}else if(strlen(v0) > strlen(v1)){
			for(i = strlen(v0)-strlen(v1), auxI = 0; i < strlen(v0); i++){
				v2[auxI] = v0[i];auxI++;
			}
			if(strcmp(v2, v1) == 0)
				equal = 1;
			else
				equal = 0;
		}

		if(equal > 0)
			printf("encaixa\n");
		else
			printf("nao encaixa\n");
	}

	return 0;
}