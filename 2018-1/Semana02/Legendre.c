#include<stdio.h>

#define MAX 50

void main(){
	int i,j,cont,n;
	
	for(n=1; n < MAX+1; n++){
		printf("Primos entre %d y %d: ",n*n,(n+1)*(n+1));
		for(j=n*n; j<(n+1)*(n+1); j++){
			cont=1;
			for(i=2; i < j && cont>0; i++){
				cont = j%i;
			}
			if(cont) printf("%d ",j);
		}printf("\n");
	}
}
