#include<stdio.h>
#include<string.h>

char *rotar(int r, char *p){
	int i,n = strlen(p);
	if(r>=n){
		puts("Posicion errada");
		return NULL;
	}
	char *str;
	strcpy(str, p);
	for(i=0;i<n;i++){
		int aux = i+r;
		aux = aux<n?aux:aux-n;
		str[i] = p[aux]; 
	}
	//strcat(r1,"akjsdhnkanksdj");
	return str;
}


void main(){
	char cadena[] = "hola";
	puts(cadena);
	char *str = rotar(1,cadena);
	if(str==NULL)return;
	puts(str);
}
