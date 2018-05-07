#include<stdio.h>

void intercambiar(int array[], int i){
	int aux = array[i];
	array[i]=array[i+1];
	array[i+1] = aux;
}

void ordenar(int n,int array[]){
	int i,j;
	char ans;
	printf("Ordenar crecientemente (s/n)?:");
	scanf("%c",&ans);
	scanf("%c",&ans);
	for(j=n-1;j>0;j--){
		for(i=0;i<j;i++){
			if(ans=='s'){ //creciente
				if(array[i] > array[i+1])
					intercambiar(array,i);
			}else //decreciente
				if(array[i] < array[i+1])
					intercambiar(array,i);
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
	ordenar(n,array);
	printf("Arreglo ordenado: ");
	for(i=0;i<n;i++)printf("%d ",array[i]);
	printf("\n");
}
