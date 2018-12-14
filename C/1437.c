#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n = 1, i;
	char de[1001], nlso;
	do{
		scanf("%d", &n);
		if(n != 0){
			scanf("%s", de);
			for(i = 0, nlso = 'N'; i < strlen(de); i++){
				if(de[i] == 'D'){
					if(nlso == 'N')
						nlso = 'L';
					else if(nlso == 'L')
						nlso = 'S';
					else if(nlso == 'S')
						nlso = 'O';
					else if(nlso == 'O')
						nlso = 'N';
				}else if(de[i] == 'E'){
					if(nlso == 'N')
						nlso = 'O';
					else if(nlso == 'L')
						nlso = 'N';
					else if(nlso == 'S')
						nlso = 'L';
					else if(nlso == 'O')
						nlso = 'S';
				}
			}
			printf("%c\n", nlso);
		}
	}while(n != 0);

	return 0;
}
