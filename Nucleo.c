#include<stdio.h>
void main(void){
	int n,k,s,j,m;
	printf("Ingrese un entero n: ");scanf("%d",&n);
	for(j=4;j<n;j++){
		for(k=3;k<j;k++){
			s=j*(j+1)/2-k;
			m=k*(k-1)/2;
			if(s==2*m) printf("el nucleo de %d es %d\n",j,k);
		}
	}
}
