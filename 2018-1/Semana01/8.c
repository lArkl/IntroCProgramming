#include<stdio.h>

void main(void){
	int num,a,b,c;
	printf("Ingrese un numero de 3 cifras: ");
	scanf("%d",&num);
	c = num%10;
	a = num/100;
	b = num%100/10;
	printf("Numero inverso: %d%d%d\n", c,b,a);
}
