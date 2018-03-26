#include<stdio.h>
void main(void){
	int i,j,n,p,q;
	printf("Ingrese un entero n menor a 5: ");scanf("%d",&n);
	for(i=n;i>=-n;i--){
		p=(i<0)?-i:i;
		for(j=-n;j<=n;j++){
			q=(j<0)?-j:j;
			switch(p+q){
				case 0: printf(" a");break;
				case 2: printf(" b");break;
				case 4: printf(" c");break;
				case 5: printf(" d");break;
				case 7: printf(" e");break;
				default: printf(" *");break;
			}
		}
	printf("\n");
	}
}
