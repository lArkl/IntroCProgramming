#include<stdio.h>
#include<string.h>

#define MAX 50

void cambio(char *str);

void main(){
	char cadena[] = "bueNoS dIaS aNdReS";
	puts(cadena);
	cambio(cadena);
	puts(cadena);
}

void cambio(char *str){
	int i;
	int a = 32;
	int n=strlen(str);
	for(i=0;i<n;i++){
		if(str[i]>64)
			str[i]=str[i]^a;
	}
}
