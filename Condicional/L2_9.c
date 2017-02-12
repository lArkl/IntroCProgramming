/*
El pago que recibe un técnico de computadoras depende de su catagoría y del tipo de
computadora que repara según la siguiente tabla:
Además, el técnico ofrece descuentos según la cantidad de computadoras que repara según la
siguiente tabla:
Elabore un programa que calcule el pago de un t ecnico de computadoras y el descuento que da
el mismo al ingresar su categoría y la cantidad de desktops y laptops que produce. Por ejemplo,
cuando un técnico de computadoras de categoría B repara 2 desktops y 3 laptops, su pago es de
189 = 0.9 (2 × 30 + 3 × 50) soles y el descuento fue de 21 = 0.1 (2 × 30 + 3 × 50) soles.*/
#include<stdio.h>
void main(void){
int d,l,m,n;
float p;
char c;
printf("Ingrese categoria de Tecnico: ");	scanf("%c",&c);
do{
printf("Ingrese cantidad de Desktops a reparar: ");	scanf("%d",&d);
}while(d<0);
do{
printf("Ingrese cantidad de Laptops a reparar: "); scanf("%d",&l);
}while(l<0);
	switch(c){
			case 'a':m=20;n=30; break;
			case 'b':m=30;n=50; break;
			case 'c':m=50;n=100; break;
			//default:printf("")
			}
	if(d+l>=10)p=.25;
	else{
		if(d+l>5)p=.2;
		else{
			if(d+l>2)p=.1;
			else p=0;
		}
	}
printf("El pago al tecnico sera de %.2f soles y el descuento fue de %.2f soles.\n",(float)(1-p)*(m*d+l*n),(float)(p)*(m*d+l*n));
}

