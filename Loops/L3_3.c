/*Se pida ingresar dos enteros positivos desde el teclado y se muestre el maximo común divisor
de ellos empleando un algortimo que NO sea el de Euclides.*/
#include<stdio.h>
void main(void){
int m,n,min,i,mcd=1;
printf("Ingrese un entero m: ");	scanf("%d",&m);
printf("Ingrese un entero n: ");	scanf("%d",&n);
min=(m<n)?m:n;
for(i=2;i<=min;i++)if(n%i==0&&m%i==0)mcd=i;
printf("el MCD de n y m es %d\n",mcd);
}
