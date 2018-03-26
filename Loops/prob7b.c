#include<stdio.h>

void main(void){
	int i,j,k,n,espacio,asterisco;
	do{
		printf("Ingrese n (mayor a 1):");
		scanf("%d",&n);
	}while(n==1);
	
	for(i=0;i<=2*n;i++){
		espacio=(i<=n?n-i:i-n); //calcula el numero de espacios
		for(k=0;k<espacio;k++) printf("  "); // escribe espacios
		asterisco=(i<=n?2*i+1:2*(2*n-i)+1); //calcula el numero de *
		for(j=0;j<asterisco;j++)printf(" *");//escribe*
		printf("\n");
	}

}
