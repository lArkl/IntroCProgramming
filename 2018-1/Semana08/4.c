#include<stdio.h>
#include<stdlib.h>

void *cargarArreglo(int n,int *arr, int *carga){
	int i;
	for(i=0;i<n;i++){
		int elem = i%2==0?i/2:n-i/2-1;
		*(carga+i) = *(arr+elem);
	};
}

void imprimir(int n,int *arr){
	int i;
	for(i=0;i<n;i++)
		printf(" %d",arr[i]);
	printf("\n");
}

void llenar(int n,int *arr){
	int i;
	for(i=0;i<n;i++)
		arr[i] = rand()%n;
}

void main(void){
	int n=4;
	int arr[n],carga[n];
	llenar(n,arr);
	printf("Arreglo:");
	imprimir(n, arr);
	int *pCarga = carga;
	cargarArreglo(n, arr, pCarga);
	printf("Arreglo Cargado:");
	imprimir(n, carga);
}
