#include<stdio.h>
int fibo(int n);
int primo(int n);
void fiboprimo(int f);
void main(void){
   int n,f,i=1;
   printf("Ingrese un numero natural: "); 
   scanf("%d",&n);
   f=fibo(n);
   printf("S. de fibonacci de %d: %d\n",n,f);
   if(primo(n)==1) printf("%d es primo\n",n);
   else printf("%d no es primo\n",n);
   fiboprimo(f);
   do{
      fiboprimo(i);
      i++;
   }while(i<=n);
}
int fibo(int n){
   if(n==0)return 0;
   if(n==1)return 1; 
   return fibo(n-1)+fibo(n-2);
}
int primo(int n){
   int i,primo=0;
   for(i=1;i<n;i++){
      if(n%i==0)primo++;
   }
   return (primo==1)?1:0; 
}
void fiboprimo(int f){
   int i;
   printf("Los numeros primos menores a %d son: ",f);
   for(i=2;i<=f;i++){
      if(primo(i)==1) printf("%d ",i);
   }printf("\n");
}
