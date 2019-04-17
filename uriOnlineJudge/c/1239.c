#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int j, i, b, first = 0;
	char v[51];
	while(fgets(v, 51, stdin) != NULL){
		if(v[strlen(v)-1] == '\n')
			v[strlen(v)-1] = '\0';

		if(first == 0)
			first = 1;
		else
			printf("\n");

		for(j = 0, i = 0, b = 0; j < strlen(v); j++){
			if(v[j] == '_'){
				if(i == 0){
					printf("<i>");
					i++;
				}else{
					printf("</i>");
					i = 0;
				}
			}else if(v[j] == '*'){
				if(b == 0){
					printf("<b>");
					b++;
				}else{
					printf("</b>");
					b = 0;
				}
			}else{
				if(v[j] != '\n');
					printf("%c", v[j]);
			}
		}
	}
	printf("\n");

	return 0;
}
