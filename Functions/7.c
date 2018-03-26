#include<stdio.h>
void rombo(int n);
void tri1(int n);
void tri2(int n);
void main(void){
	int n;
	printf("Ingrese un entero >0: "); scanf("%d",&n);
	rombo(n);
	tri1(n);
	tri2(n);
}
void rombo(int n){
	int i,j,p,m;
	for(i=n;i>=-n;i--){
		m=(i<0)?-i:i;
		for(j=-n;j<=n;j++){
			p=(j<0)?-j:j;
			if(p+m>n)printf("  ");
			else printf("* ");
		}printf("\n");
	}
}
void tri1(int n){
	int i,j,p,m;
	for(i=n;i>=-n;i--){
		m=(i<0)?-i:i;
		for(j=0;j<=n;j++){
			p=(j<0)?-j:j;
			if(p+m>=n)printf("  ");
			else printf("* ");
		}printf("\n");
	}
}
void tri2(int n){
	int i,j,p,m;
	for(i=n;i>=0;i--){
		m=(i<0)?-i:i;
		for(j=-n;j<=n;j++){
			p=(j<0)?-j:j;
			if(p+m>=n)printf("  ");
			else printf("* ");
		}printf("\n");
	}
}
