/*
Pida el valor de los coeficientes a, b y c de la ecuación cuadrática :
ax 2 + bx + c = 0,
donde a, b, c є R,
y muestre las raíces de dicha ecuación. Para ello se deberá implementar tres funciones:
realesDiferentes(float a, float b, float Delta); realesIguales(float a, float b) y complejas(float a,float b, float Delta) que mostrarán las raíces en caso el discriminante sea positivo, cero o negativo, respectivamente.
*/

#include <stdio.h>
#include <math.h>

void realesDiferentes(float a, float b, float Delta);
void realesIguales(float a, float b);
void complejas(float a,float b, float Delta);

void main(){
	float a,b,c;
	float Delta;
	
	printf("ingrese a:");scanf("%f",&a);
	printf("ingrese b:");scanf("%f",&b);
	printf("ingrese c:");scanf("%f",&c);
	
	Delta = b*b - 4*(a*c);
	if(Delta>0)realesDiferentes(a, b, Delta);
	if(Delta==0)realesIguales(a, b);
	if(Delta<0)complejas(a,b,Delta);	
}

void realesDiferentes(float a, float b, float Delta){
	float x1,x2;
	x1 = (-1*b - sqrt(Delta))/2*a;
	x2 = (-1*b + sqrt(Delta))/2*a;
	
	printf("x1 = %.3f y x2 = %.3f\n",x1,x2); 
}
void realesIguales(float a, float b){
	float x1;
	x1 = (-1*b)/2*a;
	printf("x1 = %.3f y x2 = %.3f\n",x1,x1);
}
void complejas(float a,float b, float Delta){
	float x,i;
	x = (-1*b)/2*a;
	i= sqrt(Delta*-1)/2*a;
	printf("x1 = %.3f + %.3fi  y x2 = %.3f - %.3fi\n",x,i,x,i);
}
