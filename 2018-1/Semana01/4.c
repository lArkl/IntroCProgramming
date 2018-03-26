#include<stdio.h>

void main(void){
	int tempF;
	float tempC;	
	printf("Ingrese la temperatura grados Farenheit: ");
	scanf("%d",&tempF);
	tempC=(float)(tempF-32)/1.8;
	printf("Temperatura en Celsius: %f\n",tempC);
}
