/*Se Simule a una calculadora para números enteros con las cuatro operaciones elementales. Si en
caso se ingresa la división por cero, se debe mostrar un mensaje de alerta.*/
#include<stdio.h>
void main(void){
int m,n,i;
printf("Ingrese un entero m: ");	scanf("%d",&m);
printf("Ingrese un entero n: ");	scanf("%d",&n);
printf("1) Suma\n");
printf("2) Resta\n");
printf("3) Multiplicacion\n");
printf("4) Division\n");
printf("5) Salir\n");
do{
	printf("Elija su operación: "); scanf("%d",&i);
}while(i<1||i>5);
if(i==4&&n==0)printf("Alerta: División por cero");
else	{	switch(i){
			case 1:printf("m+n=%d",m+n); break;
			case 2:printf("m-n=%d",m-n); break;
			case 3:printf("m*n=%d",m*n); break;
			case 4:printf("m/n=%.2f",(float)m/n); break;
			case 5:printf("Gracias por usar este programa"); break;
			}
		}
printf("\n");
}
