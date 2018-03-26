/*
Se Pida ingresar un número θ desde el techado y muestre los valores de sin(θ), cos(θ) y tan(θ).
*/
#include<stdio.h>
#include<math.h>
#define PI 3.1416
void main(void){
double d,c;
printf("Ingrese un numero: "); scanf("%lf",&d);
c=(d*PI/180);
printf("El coseno de %.2lf es %.3lf\n",d,cos(c));
printf("El seno de %.2lf es %.3lf\n",d,sin(c));
printf("La tangente de %.2lf es %.3lf\n",d,tan(c));
}
