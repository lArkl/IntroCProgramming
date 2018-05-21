#include<stdio.h>
#include<string.h>

#define MAX 20

const int names = 5;

void imprimir(char dic[][MAX]);
void ordenarCadenas(char dic[][MAX]);

void main(){
	char dic[][MAX] = {"Jose","Manuel","Carlos","Ana","Lalo"};
	imprimir(dic);
	ordenarCadenas(dic);
	printf("------------\n");
	imprimir(dic);
}

void imprimir(char dic[][MAX]){
	int i;
	for(i=0;i<names;i++){
		puts(dic[i]);
	}
}

void ordenarCadenas(char dic[][MAX]){
	int i,j;
	char aux[MAX];//insertionsort
	for(i=1; i < names; i++){
		for(j=i; j>0; j--){		
		//si la cadena j-1 es mayor (letra mas adelante en el alfabeto), retorna un valor mayor a 0
			if(strcmp(dic[j-1],dic[j]) > 0)  
			{ //swap para cadenas
				strcpy(aux,dic[j]);
				strcpy(dic[j],dic[j-1]);
				strcpy(dic[j-1],aux);
			}
		}
	}
}
