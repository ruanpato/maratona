#include <stdio.h>

int main(){
	char b[3], e[3];
	scanf("%s %s", &b, &e);
	if( ((b[0]+2 == e[0] || b[0]-2 == e[0]) && (b[1]+1 == e[1] || b[1]-1 == e[1])) || ((b[1]+2 == e[1] || b[1]-2 == e[1]) && (b[0]+1 == e[0] || b[0]-1 == e[0])) )
		printf("VALIDO\n");
	else
		printf("INVALIDO\n");
	return 0;
}