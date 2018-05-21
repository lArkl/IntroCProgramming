#include<stdio.h>
#include<string.h>

#define MAX 50

void reduce(char *str);
void reduce2(char *red,char *str);

void main(){
	char cadena[] = "buenos dias     andres";
	puts(cadena);
	//metodo1
	//reduce(cadena);
	//metodo2
	char reduce[MAX];
	reduce2(reduce,cadena);
	puts(reduce);
}

void reduce(char *str){
	int i,n = strlen(str);
	printf("%c",str[0]);
	for(i=1;i<n;i++){
		if(str[i-1]==' ' && str[i]==' ')//salta 1 caracter si hay 2 vacios contiguos
			continue;
		printf("%c",str[i]);//imprime caracter
	}printf("\n");
}

void reduce2(char *red,char *str){
	int i,cont=0;
	int n = strlen(str);
	for(i=0; i<n+1; i++){
		if(str[i+1]==' ' && str[i]==' '){//salta 1 caracter si hay 2 vacios contiguos
			continue;
		}
		red[cont] = str[i];
		cont++;
	}
}
