#include<stdio.h>
void main(void){
	int i=0,k;
	float m,x,s,t=1;
	printf("Ingrese un real x: ");scanf("%f",&x);
	do{
		i++;
		for(k=2*i-2;k<=2*i-1;k++){	
			k=(k==0)?1:k;
			t*=x/k;
		}m=(i%2==0)?-t:t;
		s+=m;
		if(t>=.000001) 
		printf("La suma al termino %d es %f\n",i,s);
	}while(t>=0.000001);
}
