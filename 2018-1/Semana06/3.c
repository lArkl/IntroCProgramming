#include<stdio.h>

void intercambiar(int array[], int i){
	int aux = array[i];
	array[i]=array[i+1];
	array[i+1] = aux;
}

void bubbleSort(int n,int array[]){
	int i,j;
	for(j=n-1;j>0;j--){
		for(i=0;i<j;i++){//creciente
			if(array[i] > array[i+1])
				intercambiar(array,i);
		}
	}
}

void insertionSort(int n,int array[]){
	int i,j;
	for(j=1;j<n;j++){
		for(i=j;i>0;i--){//creciente
			if(array[i] < array[i-1])
				intercambiar(array,i-1);
		}
	}
}

void main(void){
	int n;
	
	printf("Ingrese el tamaño del arreglo (n): ");
	scanf("%d",&n);
	int array[n];
	int i;
	for(i=0;i<n;i++){
		printf("Ingrese el valor de A[%d]: ",i+1);
		scanf("%d",&array[i]);
	}
	printf("Arreglo ingresado: ");
	for(i=0;i<n;i++)printf("%d ",array[i]);
	printf("\n");
	//bubbleSort(n,array);
	insertionSort(n,array);
	printf("Arreglo ordenado: ");
	for(i=0;i<n;i++)printf("%d ",array[i]);
	printf("\n");
	
}
