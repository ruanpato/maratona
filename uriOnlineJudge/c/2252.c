#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, i, k=1, j, pos;
	double v[10], big;
	char x[10];
	while(scanf("%d", &n) != EOF){
		for(i = 0; i < 10; i++)
			scanf("%lf", &v[i]);
		
		memset(x, '\0', 10);

		for(i = 0; i < n; i++){
			for(j = 0, big = 0.0, pos = 0; j < 10; j++){
				if(big < v[j]){
					big = v[j];
					pos = j;
				}
			}
			x[i] = pos+48;
			v[pos] = 0.0;
		}

		printf("Caso %d: %s\n", k, x);
		k++;
	}

	return 0;
}