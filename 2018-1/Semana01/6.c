#include<stdio.h>
#include<math.h>

#define PI 3.1416

void main(void){
	int r;
	float perimetro,area;	
	printf("Ingrese el radio del circulo: ");
	scanf("%d",&r);
	perimetro = PI*2*r;	
	area = r*perimetro/2;
	printf("Longitud: %f\n",perimetro);
	printf("Area: %f\n",area);
}
