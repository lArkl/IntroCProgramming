#include<stdio.h>

void suma(int m, int C[][m],int A[][m],int B[][m]){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			C[i][j] = A[i][j]+B[i][j];
		}
	}
}

void resta(int m, int C[][m], int A[][m],int B[][m]){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			C[i][j] = A[i][j]-B[i][j];
		}
	}
}

void multi(int m, int C[][m], int A[][m],int B[][m]){
	int i,j,k;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			C[i][j]=0;
			for(k=0;k<m;k++){
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
}

void imprimir(int m, int C[][m]){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d ",C[i][j]);
		}printf("\n");
	}
}

void main(void){
	int m;
	printf("Ingrese el tamaño de la matriz cuadrada (m): "); 
	scanf("%d",&m);
	int A[m][m];
	int B[m][m];
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("Ingrese el valor de A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("Ingrese el valor de B[%d][%d]: ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	int C[m][m];
	//suma(m,C,B,A);
	multi(m,C,A,B);
	imprimir(m,C);
}
