#include<stdio.h>

void mostrarTranspuesta(int m, int n,int array[][m]){
	int i,j;
	for(j=0;j<m;j++){
		for(i=0;i<n;i++){
			printf("%d\t",array[i][j]);
		}printf("\n");
	}
}

void main(void){
	int n,m;
	printf("Ingrese el tamaño de la matriz (n m): "); 
	scanf("%d %d",&n,&m);
	int array[n][m];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Ingrese el valor de A[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	mostrarTranspuesta(m,n,array);
	//printf("Ingrese los valores de la primera fila:"); scanf()
}
