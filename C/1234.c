#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int caseDanc = 1, i, aux;
	char v[51];
	while(fgets(v, 51, stdin) != NULL){
		v[strlen(v)-1] = '\0';
		aux = strlen(v);caseDanc = 1;
		for(i = 0; i < aux; i++){
			if(v[i] >= 65 && v[i] <= 90){
				if(caseDanc == 0){
					printf("%c", v[i]+32);
					caseDanc = 1;
				}else{
					printf("%c", v[i]);
					caseDanc = 0;
				}
			}else if(v[i] >= 97 && v[i] <= 122){
				if(caseDanc == 0){
					printf("%c", v[i]);
					caseDanc = 1;
				}else{
					printf("%c", v[i]-32);
					caseDanc = 0;
				}
			}else{
				printf("%c", v[i]);
			}
		}
		if(strlen(v) > 0)
			printf("\n");
		memset(v, '\0', sizeof(v));
	}

	return 0;
}