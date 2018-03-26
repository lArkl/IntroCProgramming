/*Se Pida ingresar un entero en el rango de 1 a 99 y muestre la representación de dicho número en
romano.*/
#include<stdio.h>
void main(void){
int n,x,i=0;
	do{
		printf("Ingrese un entero entre 1 y 99: "); scanf("%d",&n);
	}while(n<0||n>99);
	x=(n/10); i=n-10*x;

	if(x>3){
		if(x==4)printf("XL");
		else{
			if(x==9) printf("XC");
			else printf("L");
		}x-=5;
	}switch(x){
	case 1: printf("X");	break;
	case 2: printf("XX");break;
	case 3: printf("XXX");break;
	}
	if(i>3){
		if(i==4)printf("IV");
		else{
			if(x==9) printf("IX");
			else printf("V");
		}i-=5;
	}switch(i){
	case 1: printf("I");	break;
	case 2: printf("II");break;
	case 3: printf("III");break;
	}
	printf("\n");
}
