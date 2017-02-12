/*
1. Imprima el menú mostrado abajo, pida la cantidad a convertir según la opción ingresada y
muestre la conversión. Para ello, se deberá crear funciones para realizar cada conversión.
1. Centígrados a Fahrenheit
2. Fahrenheit a centígrados
3. Kilogramos a Libras
4. Libras a Kilogramos
5. Salir
*/
#include<stdio.h>
float cf(float n);
float fc(float n);
float kl(float n);
float lk(float n);
void main(void){
   int p;
   float n;
   printf("Ingrese un numero: "); scanf("%f",&n);
   do{
      p=menu();
      switch(p){
         case 1: printf("%.2f Centígrados a Fahrenheit: %.2f",n,cf(n)); break;
         case 2: printf("%.2f Fahrenheit a centígrados: %.2f",n,fc(n)); break;
         case 3: printf("%.2f Kilogramos a Libras: %.2f",n,kl(n)); break;
         case 4: printf("%.2f Libras a Kilogramos: %.2f",n,lk(n)); break;
         default: printf("Gracias por su visita");
         }
      printf("\n");   
      }while(p!=5);

}
int menu(void){
   int p;
   printf("1.Centígrados a Fahrenheit\n");
   printf("2.Fahrenheit a centígrados\n");
   printf("3.Kilogramos a Libras\n");
   printf("4.Libras a Kilogramos\n");
   printf("5.Salir\n");
   do{
      printf("Escoja su opción: "); scanf("%d",&p);
   }while(p>5||p<1);
   return p;
}
float cf(float n){
   return n*1.8+32;
}
float fc(float n){
   return (n-32)/1.8;
}
float kl(float n){
   return n*2.204;
}
float lk(float n){
   return n/2.204;
}
