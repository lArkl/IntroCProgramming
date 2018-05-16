#include<stdio.h>
#include<stdlib.h>

void imprimir(int n,int *arr);
void carga(int *arr, int n);

void main(void){
	int n=15;
	int arr[n];
	int *pArr = arr;
	printf("Indice\tArreglo\n");
	carga(pArr, n);
}

void imprimir(int n,int *arr){
	int i;
	printf("%d\t",n);
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void carga(int *arr, int n){
	int i,j;
	//arr = malloc(sizeof(int)*n);
	for(i = 0;i<n;i++){
		int r = rand()%51+10;
		*(arr + i) = r;
		if(i==0)continue;
		for(j=i; j>0 ;j--){
			if(*(arr+j-1)>r ){
				*(arr+j) = *(arr+j-1);
				*(arr+j-1) = r;
			}
		}
		imprimir(i,arr);
	}
}
