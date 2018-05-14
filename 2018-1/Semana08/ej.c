#include<stdio.h>
#include<stdlib.h>

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
				//break;
			}
		}
	}
}


void main(void){
	int arr[]={50,13,2,45,7};
	printf("Indice\tArreglo\n");
	insertionSort(arr,5);
	imprimir(5,arr);	
	//carga(arr, n);
}
