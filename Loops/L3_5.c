/*Se pida ingresar un entero mayor que 1 desde el teclado y se muestre todos los primos menores
o iguales al valor ingresado.*/
#include<stdio.h>
void main(void){
int m,n,i;
printf("Ingrese un entero n: ");	scanf("%d",&n);
for(i=2;i<=n;i++){
	if(n%i==0){
	n/=i;
	printf("%d es un primo menor\n",i);
	;	
}
}
}
