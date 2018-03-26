/*Se pida ingresar un entero positivo desde el teclado y se muestre si dicho número es primo o no.*/
#include<stdio.h>
void main(void){
int i=1,n;
printf("Ingrese un entero: ");scanf("%d",&n);
do{
	i++;
}while(n%i!=0&&i<n);
if(i<n)printf("n no es primo\n");
else printf("n es primo\n");
}
