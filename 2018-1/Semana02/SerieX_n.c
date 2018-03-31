#include<stdio.h>

void main(){
	int i,x,n;
	
	printf("Ingrese el valor de x y n (x n): ");
	scanf("%d %d",&x,&n);
	
	float s = 0.0;
	int p = x;
	for(i = n; i > 1; i -= 2){
		s += (float)p / (i-1);
		//printf("%d\t%d\t%f\n",i,p,s);
		p = -p*x*x;
	}
	printf("La suma de la serie para x = %d hasta n = %d es %f\n",x,n,s);
}
