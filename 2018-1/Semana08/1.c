#include<stdio.h>
#include<stdlib.h>
//Suma en arreglos en forma de punter
void sumaArreglos(int max,int *parr1, int *parr2, int *parrs){
	int i;
	for(i=0;i<max;i++){
		*parrs++ = *parr1++ +*parr2++;
	//	*(parrs+i) = 
	}
}
//Impresion en forma de arreglo bidimensional
void imprimir(int m,int n,int arr[m][n]){
	int i,j;
	for(j=0;j<m;j++){
		for(i=0;i<n;i++)
			printf(" %d",arr[j][i]);
		printf("\n");
	}
}
//Impresion en forma de puntero
void imprimir2(int m,int n,int *parr){
	int i,j;
	for(j=0;j<m;j++){
		for(i=0;i<n;i++)
			printf(" %d",*parr++);
		printf("\n");
	}
}
//Ingresa los valores aleatorios al arreglo bidimensional
void llenar(int m, int n,int arr[][n]){
	int i,j;
	for(j=0;j<m;j++)
		for(i=0;i<n;i++)
			arr[j][i] = rand()%20;
}

void main(void){
	int m=2,n=3;
	int arr1[m][n],arr2[m][n],sum[m][n];
	llenar(m,n,arr1);
	llenar(m,n,arr2);
	int *parr1,*parr2,*parrs;
	parr1 = &arr1[0][0];
	parr2 = arr2[0];
	parrs = sum[0];
	sumaArreglos(m*n, parr1, parr2, parrs);
	printf("Arreglo 1:\n");
	imprimir(m,n, arr1);
	printf("Arreglo 2:\n");
	imprimir(m,n, arr2);
	printf("Suma:\n");
	//parrs = sum[0];
	imprimir2(m,n,parrs);
	//imprimir(m,n,sum);
}
