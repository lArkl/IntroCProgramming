#include<stdio.h>
#include<math.h>

void main(void){
	int a,b,c;
	float s,area;	
	printf("Ingrese los lados a b c del triangulo: ");
	scanf("%d %d %d",&a,&b,&c);
	s = (float)(a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Perimetro: %d\n",a+b+c);
	printf("Area: %f\n",area);
}
