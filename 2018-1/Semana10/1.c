#include<stdio.h>
#include<stdlib.h>

void imprimir(int n, int *p);
void ordenar(int n, int *p);

void main(){
	int i,val,contador=0;
	int *valores = NULL;
	do{
		printf("Ingrese valor (-1 para terminar): ");
		scanf("%d",&val);
		if(val!=-1){
			valores = realloc(valores,sizeof(int)*contador);
			valores[contador] = val;
			contador++;
		}
	}while(val != -1);
	imprimir(contador,valores);
	ordenar(contador,valores);
	imprimir(contador,valores);
	free(valores);
}

void imprimir(int n, int *p){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",*p++);
	}printf("\n");
}

void ordenar(int n, int *p){
	int i,j;
	for(i=1; i < n; i++){
		for(j=i; j > 0; j--){
			if( p[j] < p[j-1] ){
				int aux = *(p+j);
				*(p+j)=*(p+j-1);
				*(p+j-1) = aux;
			}
		}
	}
}
