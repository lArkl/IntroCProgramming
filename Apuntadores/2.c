#include<stdio.h>

void main(void){
	int p[4][12];
	leer(p,4,12);

}
void leer(int *pp,int a,int m){
	int i,j;
	for(i=0;i<a;i++)
		for(j=0;j<m;j++)
			*(pp+i*m+j)=i+j;
}
void promedio(int *)
