#include<stdio.h>

void main(void){
	int temp1;
	float temp2;	
	printf("Ingrese la temperatura grados Farenheit: ");
	scanf("%d",&temp1);
	temp2=(float)(temp1-32)/1.8;
	printf("Temperatura en Celsius: %f\n",temp2);
}
