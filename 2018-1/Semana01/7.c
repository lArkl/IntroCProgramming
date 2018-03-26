#include<stdio.h>
#include<math.h>

void main(void){
	int a,b,c;
	float discriminante;
	printf("Ingrese los coeficientes del polinomio ax^2+bx+c (a b c): ");
	scanf("%d %d %d",&a,&b,&c);
	discriminante = b*b-4*a*c;
	if (discriminante < 0){
		printf("Tiene raices complejas\n");
		return;
	}
	float p1 = -b/(2*a);
	float p2 = sqrt(discriminante)/(2*a);
	printf("Raiz 1: %f\n", p1+p2);
	printf("Raiz 2: %f\n", p1-p2);
}
