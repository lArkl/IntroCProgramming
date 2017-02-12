/*Se Pida ingresar un número entero y muestre si este es par o impar.*/
#include<stdio.h>
void main(void){
	int n;
	printf("Ingrese un entero n: ");	scanf("%d",&n);
	if(n%2==0) printf("n es par\n");
	else printf("n es impar\n");
}
