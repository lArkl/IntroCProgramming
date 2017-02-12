/*
Escribe un programa que genere el triangulo de Pascal.
*/
#include<stdio.h>
void main(void){
   int n,salto=1,j,i,m,k;
   printf("Ingrese un numero n: "); scanf("%d",&n);
   int M[n];
   M[0]=1;
   M[1]=1;
   for(i=2;i<=n;i++){
      M[i]=M[i-1]+M[i-2];
   }
   for(i=0;i<n;i++){
      printf("n = %d: ",i+1);
      for(j=n;j>=-n;j--){  
			k=j>0?j:-j;
			if(i<k)printf("   ");
			else printf(" %d ",M[k+1]);
		}printf("\n");
	}
}
