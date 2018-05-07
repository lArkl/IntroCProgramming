#include<stdio.h>
#include<stdlib.h>

int *sumaArreglos(int m,int n,int *arr1, int *arr2){
	int i;
	int max = m>n?m:n;
	int *aux=malloc(sizeof(int)*max);
	for(i=0; i< max; i++){
		if(max == m){
			if(i<n)
				aux[i] = arr1[i]+arr2[i];
			else
				aux[i] = arr1[i];
		}else{
			if(i<m)
				aux[i] = arr1[i]+arr2[i];
			else
				aux[i] = arr2[i];
		}		
	}return aux;
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
	int m=6,n=4;
	int arr1[m],arr2[n];
	llenar(m,arr1);
	llenar(n,arr2);
	int *arr = sumaArreglos(m, n, arr1, arr2);
	printf("Arreglo 1:");
	imprimir(m, arr1);
	printf("Arreglo 2:");
	imprimir(n, arr2);
	printf("Suma:");
	int max = m>n?m:n;
	imprimir(max, arr);
}
