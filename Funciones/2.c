/*
2. Pida al usuario ingresar un entero positivo n y muestre, llamando a una función primo(int n) que
retorna 1 si se ingresa un primo y 0 si se ingresa un entero que no es primo, todos los primos
menores o iguales a n.*/
#include<stdio.h>
int primo(int n);
void main(void){
   int p,n,k;
   printf("Ingrese un entero positivo n: "); scanf("%d",&n);
   for(k=2;k<=n;k++){
      if(primo(k)==1) printf("%d,",k);
   }
   printf("\n");
}
int primo(int n){
   int i,cont=0;
   for(i=1;i<=n;i++){
      if(n%i==0) cont++;
   }if(cont==2) return 1;
   return 0;
}
