#include<stdio.h>
#include<string.h>

void reduce(char *str){
	int i,n = strlen(str);
	printf("%c",str[0]);
	for(i=1;i<n;i++){
		if(str[i-1]==' ' && str[i]==' ')
			continue;
		printf("%c",str[i]);
	}printf("\n");
}

void main(){
	char cadena[] = "buenos dias     andres";
	puts(cadena);
	reduce(cadena);
	//printf("%c",aux[0]);
}
