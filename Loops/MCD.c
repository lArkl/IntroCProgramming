#include<stdio.h>
void main(void){
   int i,m,a,b,k;
   printf("Ingrese dos numeros naturales: "); 
   scanf("%d %d",&a,&b);
   m=(a<b)?b:a;
   for(i=1;i<=m;i++){
      if(a%i==0&&b%i==0)k=i; 
   }
   printf("MCD: %d\n",k);
}
