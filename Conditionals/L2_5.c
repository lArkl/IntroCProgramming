/*Se Pida ingresar un año después de 1600 y muestre si es bisiesto o no.
Sugerencia:
busque en google: año bisiesto > entre en la primera fila: Año bisiesto – Wikipedia > 3.
Algoritmo computacional*/
#include<stdio.h>
void main(void){
int n;
do{
	printf("Ingrese un año n mayor a 1600: ");	scanf("%d",&n);
}while(n<=1600);
if(n%4==0&&(n%100!=0||n%400==0)) printf("n es bisiesto\n");
else printf("n no es bisiesto\n");
}
