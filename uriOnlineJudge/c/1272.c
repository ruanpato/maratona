#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int qnt, i, flagSpace = 1;
	char v[51];
	scanf("%d", &qnt);
	getchar();
	while(qnt--){
		fgets(v, 51, stdin);
		v[strlen(v)-1] = '\0';
		flagSpace = 1;
		for(i = 0; i < strlen(v); i++){
			if(v[i] == ' '){
				flagSpace = 1;
			}else if(flagSpace == 1 && v[i] != ' ' && isalpha(v[i])){
				printf("%c", v[i]);
				flagSpace = 0;
			}
		}
		printf("\n");
	}

	return 0;
}