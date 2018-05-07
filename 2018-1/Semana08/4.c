#include<stdio.h>
#include<stdlib.h>

int *cargarArreglo(int n,int *arr, int *carga){
	int i;
	carga = malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		int elem = i%2==0?i/2:n-i/2-1;
		carga[i] = arr[elem];
	}return carga;
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
	int arr[n];
	llenar(n,arr);
	int *carga;
	carga = cargarArreglo(n,arr, carga);
	printf("Arreglo:");
	imprimir(n, arr);
	printf("Arrgelo Cargado:");
	imprimir(n, carga);
}
