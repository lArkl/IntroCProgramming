#include<stdio.h>
#include<stdlib.h>

void imprimir(int n,int *arr);
void insertionSort(int *arr, int n);
void carga(int *arr, int n);

void main(void){
	int n=15;
	int *arr;
	printf("Indice\tArreglo\n");
	carga(arr, n);
}

void imprimir(int n,int *arr){
	int i;
	printf("%d\t",n);
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void insertionSort(int *arr, int n){
	int i;
	for(i=1;i<n;i++){
		int j;
		for(j=i;j>0;j--){
			if(arr[j-1]>arr[j]){
				int aux = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = aux;
			}
		}
	}
}

void carga(int *arr, int n){
	int i;
	arr = malloc(sizeof(int)*n);
	for(i = 0;i<n;i++){
		int r = rand()%51+10;
		arr[i] = r;
		insertionSort(arr,i);
		imprimir(i,arr);
	}
}
