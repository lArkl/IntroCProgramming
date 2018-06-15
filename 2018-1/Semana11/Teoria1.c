#include<stdio.h>
#include<string.h>

typedef struct Estudiante{
	int codigo;
	char nombre[25];
}Estudiante;

void ordenarCodigo(int n1, int n2,Estudiante *est1, Estudiante *est2){
	int i;
	Estudiante *e,*fin,*mayor,*menor;
	mayor = n1<n2? est2:est1;
	menor = mayor==est2?est1:est2;
	fin = n1<n2? menor+n1:menor+n2;
	for(i=0;i<n1+n2;i++){
		if(menor<fin && menor->codigo < mayor->codigo){
			e = menor;
			menor++;
		}else{
			e = mayor;
			mayor++;
		}
		printf("%d\t",e->codigo);
		printf("%s\n",e->nombre);
	}
}

void main(){
	Estudiante est1[2]= {1,"Juan",5,"Jose"};
	Estudiante est2[3] = {3,"Rosita",7,"Maria",9,"Juana"};
	ordenarCodigo(2,3,est1,est2);
}
