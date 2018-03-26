/*Se Pida ingresar tres números enteros. Luego determine y muestre el mayor de ellos.*/
#include<stdio.h>
void main(void){
	int a,b,c,m;
	printf("Ingrese 3 numeros enteros\n");
	printf("Ingrese 1er entero: "); scanf("%d",&a);
	printf("Ingrese 2do entero: ");	scanf("%d",&b);
	printf("Ingrese 3er entero: ");	scanf("%d",&c);
	m=c;
	if(a>=b){if(c<=a) m=a;}
	else {	if(b>=c) m=b;}	
printf("El mayor numero es %d\n",m);
}
