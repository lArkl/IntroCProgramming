/*Pida ingresar un entero n > 1 dibuje un triángulo de altura 2n − 1 y ancho n. Por ejemplo, para n = 2 se tendrá:
*
* *
*/
#include<stdio.h>
void main(void){
	int n,j,i,m,k;
	printf("Ingrese un entero n: ");	scanf("%d",&n);
	for(i=n;i>=-n;i--){
		for(j=-n;j<=n;j++){
			k=(i<0)?-i:i;
			m=(j<0)?-j:j;
			if(k+m<n)printf(" * ");
		 	else printf("   ");	
		}
	printf("\n");
	}
}
