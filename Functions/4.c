/*Pida ingresar dos enteros positivos y muestre su MCD y MCM evocando dos funciones mcd(int a, int b) y mcm(int a, int b) que retornan el MCD y MCM, respectivamente, si se ingresan dos
enteros positivos.*/
#include<stdio.h>
int mcd(int n,int m);
int mcm(int p,int c);
void main(void){
	int m,n,c;
	printf("Ingrese entero n>o: "); scanf("%d",&n);
	printf("Ingrese entero m>o: "); scanf("%d",&m);
	c=mcd(n,m);
	printf("MCD: %d\n",c);
	printf("MCM: %d\n",mcm(m*n,c));
}

int mcd(int n,int m){
	if(m==0) return n; 
	if(n<=m) return mcd(n,m%n);
	return mcd(m,n%m);
}
int mcm(int p,int c){
	return p/c;
}
