#include<stdio.h>
#include<stdlib.h>

//Producto por punteros
void producto(int m, int n, int p, int *arr1, int *arr2,int *prod){
	int i,a,b,c;
	for(i=0;i<m*n*p;i++){
		//printf("%d %d %d\n",(i/p/n),(i/p)%n,i%p);
		a = i/(p*n);
		b =(i/p)%n;
		c = i%p;
		*(prod+c+a*p) += *(arr1+b+a*n)* *(arr2+c+b*p);
	}
}

//Ingresa los valores aleatorios al arreglo bidimensional
void llenar(int m, int n,int arr[][n]){
	int i,j;
	for(j=0;j<m;j++)
		for(i=0;i<n;i++)
			arr[j][i] = rand()%20;
}

//Impresion en forma de arreglo bidimensional
void imprimir(int m,int n,int arr[m][n]){
	int i,j;
	for(j=0;j<m;j++){
		for(i=0;i<n;i++)
			printf("%d\t",arr[j][i]);
		printf("\n");
	}
}

void main(){
	int m=4,n=3,p=2;
	int m1[m][n],m2[n][p], mult[m][p];
	
	llenar(m,n,m1);
	printf("Matriz 1\n");
	imprimir(m,n,m1);
	
	llenar(n,p,m2);
	printf("Matriz 2\n");
	imprimir(n,p,m2);
	
	//Debemos volver cero los valores iniciales de mult:
	int i,k;
	for(k=0;k<m;k++)for(i=0;i<p;i++) mult[k][i] = 0;
	
	int *prod = mult[0],*arr1 = m1[0],*arr2 = m2[0];
	producto(m,n,p,arr1,arr2,prod);
	printf("Producto\n");
	imprimir(m,p,mult);
}
