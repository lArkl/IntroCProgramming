#include<stdio.h>
#include<math.h>

void main(void){
	int ax,bx,ay,by;
	float distancia;	
	printf("Ingrese las coordenadas de A (x y): ");
	scanf("%d %d",&ax,&ay);
	printf("Ingrese las coordenadas de B (x y): ");
	scanf("%d %d",&bx,&by);
	distancia = sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
	printf("Distancia entre A y B: %f\n",distancia);
}
