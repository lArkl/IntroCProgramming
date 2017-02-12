#include<stdio.h>

int ack(int m, int n);
void main(void){
	int n,m;
	//printf("Ingrese dos enteros: "); scanf("%d %d",&n,&m);
	n=2;m=3;
	printf("F. Ackerman (%d,%d): %d\n",m,n,ack(m,n));
}
int ack(int m, int n){
	printf("Ack(%d,%d)\n",m,n);
	if(m==0) return n+1;
	else if(n==0) return ack(m-1,1);
	return ack(m-1,ack(m,n-1));
}
