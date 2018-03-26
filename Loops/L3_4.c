/*Se pida ingresar dos enteros positivos desde el teclado y se muestre el máximo común divisor
de ellos empleando el algoritmo de Euclides.*/
#include<stdio.h>
void main(void){
int m,n,p;
printf("Ingrese un entero m: ");	scanf("%d",&m);
printf("Ingrese un entero n: ");	scanf("%d",&n);

do{
	if(m<n){p=n;n=m;m=p;};//m siempre sera mayor
	m=m%n;
}while(m!=0);
printf("el MCD de n y m es %d\n",n);
}
