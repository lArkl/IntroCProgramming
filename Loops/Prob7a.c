#include<stdio.h>
void main(void){
	int n,k,i,j,l;
   printf("Ingrese un entero n=");	scanf("%d",&n);
   for(i=n;i>=-n;i--){
      k=(i<0)? -i:i; //k=/i/
      for(j=-n;j<=n;j++){
         l=(j<0)? -j:j;
         if(k+l<=n)printf("*");
         else printf(" ");
       }
      printf("\n");
   }
}
