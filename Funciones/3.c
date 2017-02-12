/*
Pida introducir un entero positivo n y sobre él se realicen las siguientes operaciones: comprobar
si es primo, hallar su factorial y hallar la suma desde 1 hasta n. Cada operación debe realizarse
en una función. El menú debe aparecer hasta que el usuario indique que ha finalizado.*/
#include<stdio.h>
int primo(int n);
int menu(void);
int fact(int n);
int suma(int n);
void main(void){
   int p,n,k;
   printf("Ingrese un entero positivo n: "); scanf("%d",&n);
   do{
      p=menu();
      switch(p){
         case 1: primo(n); break;
         case 2: printf("Factorial de %d: %d",n,fact(n)); break;
         case 3: printf("Suma de %d: %d",n,suma(n)); break;
         default: printf("Gracias por su visita");
         } printf("\n");
   }while(p!=4);
}
int menu(void){
   int p;
   printf("1.Primo\n");
   printf("2.Factorial\n");
   printf("3.Suma\n");
   printf("4.Salir\n");
   do{
      printf("Escoja su opción: "); scanf("%d",&p);
   }while(p>4||p<1);
   return p;
}
int primo(int n){
   int i;
   for(i=2;i<n;i++){
      if(n%i==0){
      printf("%d no es primo",n);
      return 0;
      }
    }printf("%d es primo",n);
    return 0;
}
int fact(int n){
   if(n==1) return 1;   
   return n*fact(n-1);
}
int suma(int n){
   return n*(n+1)/2;
}
