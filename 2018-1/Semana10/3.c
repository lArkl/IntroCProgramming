#include<stdio.h>
#include<stdlib.h>

void imprimir(int n, int *p);
int suma (int *v, int nfilas, int ncols);
int suma2(int **v, int nfilas, int ncols);

void main(){
	int me[10][20];
	int **md;
	int i,j;
	
	md = malloc(10*sizeof(int *));
	for(i=0; i < 10; i++)
		md[i] = malloc(20*sizeof(int));
		
	for(i=0; i < 10; i++){
		for(j=0; j < 20; j++){
			int aux = rand()%100;
			me[i][j] = aux;
			*(md[i]+j) = aux;
		}
	}
	/*
	printf("Matriz estatica\n");
	for(i=0; i<10; i++)
		imprimir(20,me[i]);
	printf("Matriz dinamica\n");
	for(i=0; i<10; i++)
		imprimir(20,md[i]);
	*/
	printf("Suma estatica: %d\n",suma(me,10,20));
	printf("Suma dinamica: %d\n",suma2(md,10,20));
	
	for(i=0; i<10; i++)
		free(md[i]);
	free(md);
}

int suma (int *v, int nfilas, int ncols){
	int i,j,sum = 0;
	for(i=0;i<nfilas;i++){
		for(j=0;j<ncols;j++){
			sum+= *(v+i*ncols+j);
		}
	}return sum;
}

int suma2(int **v, int nfilas, int ncols){
	int i,j,sum = 0;
	for(i=0;i<nfilas;i++){
		for(j=0;j<ncols;j++){
			sum+= *(v[i]+j);
		}
	}return sum;
}


void imprimir(int n, int *p){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",*p++);
	}printf("\n");
}
