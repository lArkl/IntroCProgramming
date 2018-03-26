/*Se pida ingresar 5 números enteros. Luego determine y muestre el mayor y menor de ellos.*/
#include<stdio.h>
void main(void){
int i,m,a[5];
for(i=1;i<6;i++){
	printf("Ingrese un entero: ");scanf("%d",&a[i]);
}
for(i=1;i<5;i++){
	if(a[i+1]<a[i]){
		m=a[i];
		a[i]=a[i+1];
		a[i+1]=m;
	}
}
printf("El mayor numero es: %d\n",a[5]);
printf("El menor numero es: %d\n",a[1]);
}
