#include<stdio.h>
#include<string.h>

void romano(int n,char numero[]);

void main(){
	int n=4000;
	while(n>3999){
		printf("Ingrese un numero < 4000: ");
		scanf("%d",&n);
	}
	//n = 3568;
	char numero[30]="";
	romano(n,numero);
	
}

void romano(int n, char numero[]){
	int i,a,b,c,d;
	d = n%10;
	c = (n%100)/10;
	a = n/1000;
	b = n/100-a*10;
	printf("%d%d%d%d\n",a,b,c,d);
	
	// Cuarto digito
	for(i=0;i<a;i++)
		strcat(numero,"M");
	
	// Tercer digito
	switch(b){
		case 9:strcat(numero,"CM");break;
		case 4:strcat(numero,"CD");break;
	}
	if(b>=5)
		strcat(numero,"D");
	for(i=0;i<b%5;i++){
		strcat(numero,"C");
	}
	// Segundo digito
	switch(c){
		case 9:strcat(numero,"XL");break;
		case 4:strcat(numero,"XC");break;
	}
	if(c>=5)
		strcat(numero,"L");
	for(i=0;i<c%5;i++)
		strcat(numero,"X");
	
	// Primer digito
	switch(d){
		case 9:strcat(numero,"IX");break;
		case 4:strcat(numero,"IV");break;
	}
	if(d>=5)
		strcat(numero,"V");
	for(i=0;i<d%5;i++)
		strcat(numero,"I");
	
	printf("%s\n",numero);
}
