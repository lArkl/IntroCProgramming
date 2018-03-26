#include<stdio.h>
#include<math.h>

void main(void){
	int m,n;
	float hipotenusa;	
	printf("Ingrese los catetos del m y n del triangulo rectangulo: ");
	scanf("%d %d",&m,&n);
	hipotenusa=sqrt(m*m+n*n);
	printf("hipotenusa: %f\n",hipotenusa);
}
