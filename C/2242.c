#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int i, j, flag = 0;
	char laugh[51], auxL[51];
	scanf("%s", laugh);
	memset(auxL, '\0', sizeof(auxL));
	for(i = 0, j = 0; i < strlen(laugh); i++){//remove consoantes
		if(laugh[i] == 'a' || laugh[i] == 'e' || laugh[i] == 'i' || laugh[i] == 'o' || laugh[i] == 'u'){
			auxL[j] = laugh[i];
			j++;
		}
	}
	for(i = 0, j = strlen(auxL)-1; i < strlen(auxL); i++){
		if(auxL[i] == auxL[j])
			flag++;
		else
			break;
		j--;
	}

	printf(strlen(auxL) == flag ? "S\n" : "N\n");


	return 0;
}