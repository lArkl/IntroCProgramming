#include<stdio.h>
#include<stdlib.h>
/*
Escriba una función que reciba como únicos parámetros: tres apuntadores a una secuencia de
enteros (2 ordenados ascendentemente y uno descendentemente); y retorne un apuntador a una
secuencia de enteros que almacene los valores de los tres arreglos pero ordenada en forma
ascendente.
*/
#define N 20

int *ascendente(int *a1, int *a2, int *d);
void ordenar(int *a, char o);
void imprimir(int n, int *p);

void main(){
	int i,ascendente1[N],ascendente2[N],descendente[N];
	/* Generacion de aleatorios y ordenamiento
	for(i=0; i < N; i++){
		ascendente1[i] = rand()%100;
		ascendente2[i] = rand()%100;
		descendente[i] = rand()%100;
	}
	ordenar(ascendente1,'a');
	ordenar(ascendente2,'a');
	ordenar(descendente,'d');
	*/
	for(i=0;i<N;i++){
		ascendente1[i] = i*3;
		ascendente2[i] = 2+i;
		descendente[i] = N+5-i;
	}
	imprimir(N,ascendente1);
	imprimir(N,ascendente2);
	imprimir(N,descendente);
	int *asc = ascendente(ascendente1,ascendente2,descendente);
	imprimir(3*N,asc);
	free(asc);
}

void imprimir(int n, int *p){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",*p++);
	}printf("\n");
}

void swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void ordenar(int *a, char o){
	int i,j;
	for(i=1; i<N; i++){
		for(j=i; j>0; j--){
				if(o == 'a' && *(a+j) < *(a+j-1)){
					swap(a+j,a+j-1);
				}else
				if(o == 'd' && *(a+j) > *(a+j-1)){
					swap(a+j,a+j-1);
				}
		}
	}
}

int *ascendente(int *a1, int *a2, int *d){
	int i,*arr = malloc(3*N*sizeof(int));
	int cont1 = 0,cont2 = 0, contd = N-1;
	for(i=0; i<3*N; i++){
		int x1 = cont1<N? a1[cont1]:1000;
		int x2 = cont2<N? a2[cont2]:1000;
		int x3 = contd>-1? d[contd]:1000;
		if(x1>x2){
			if(x3 < x2){
				arr[i] = x3;
				contd--;
			}else{
				arr[i] = x2;
				cont2++;
			}
		}else{
			if(x1 < x3){
				arr[i] = x1;
				cont1++;
			}else{
				arr[i] = x3;
				contd--;
			}
		}
	}
	/*
	for(i=0;i<N;i++){
		arr[i] = a1[i]; 
	}
	for(i=N;i<2*N;i++){
		arr[i] = a2[i-N]; 
	}
	for(i=2*N;i<3*N;i++){
		arr[i] = d[i-N*2]; 
	}
	ordenar(arr,'a');
	*/
	return arr;
}

