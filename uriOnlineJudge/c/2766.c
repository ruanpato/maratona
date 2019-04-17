#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i;
	char nome[100];
	for(i = 0; i < 10; i++){
		scanf("%s", nome);
		if(i == 2 || i == 6 || i == 8)
			printf("%s\n", nome);
	}

	return 0;
}