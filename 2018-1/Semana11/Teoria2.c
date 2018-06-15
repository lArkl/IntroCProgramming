#include <stdio.h>
#include <string.h>

typedef struct Profe{
	int codigo;
	char nombre[25];
	int sueldo;
}Profe;

void imprimir(int n,Profe *p);

void actualizar(int n1, int n2, Profe *p, Profe *act);

void main(){
	Profe profe[5] = {{1, "Juan", 2000}, {3, "zoila", 1500}, {5, "Pedro", 1200}, {7, "Carlo", 1200}, {9, "Luis", 2000}};
	
	imprimir(5,profe);
	
	Profe actual[2] = {{3, "Zoila", 3000}, {7, "Carlos", 2000}};
			
	actualizar(5,2,profe,actual);
	imprimir(5,profe);

}

void actualizar(int n1, int n2, Profe *p, Profe *act){
	int cont1=0,cont2=0;
	while(cont2<n2 && cont1<n1){
		if(act->codigo==p->codigo){
			strcpy(p->nombre,act->nombre);
			p->sueldo = act->sueldo;
			cont2++;
			act++;
		}else{
			p++;
			cont1++;
		}
	}
}

void imprimir(int n,Profe *p){
	int i;
	printf("Codigo\tNombre\tSueldo\n");
	for(i=0;i<n;i++){
		printf("%d\t%s\t%d\n",
		p[i].codigo, p[i].nombre,
		p[i].sueldo);
	}
}
