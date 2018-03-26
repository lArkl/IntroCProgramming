#include<stdio.h>
int B(int n, int k,int m);
int sum(int k);
int n;
void main(void){
	int k;
	printf("Ingrese un valor para n: "); scanf("%d",&n);
	printf("La suma de los coeficientes binomiales es: %d\n",sum(n));
}

int B(int n, int k,int m){
	if(k==0) k=1; 
	if(m==0) m=1;
	if(n==1)	return 1;
	return n*B(n-1,k-1,m-1)/(k*m);
}
int sum(int k){
	int m;
	m=n-k;
	if (k==0) return 1;
	return B(n,k,m)+sum(k-1);
}
