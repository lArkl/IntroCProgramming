#include<stdio.h>
#include<string.h>

#define MAX 20

const int names = 4;

void ordenarCadenas(char *dic[MAX]){
	int i;
	char *aux;
	for(i=0; i<names; i++){
		if(strcmp(dic[i],dic[i+1]) > 0)
		{
			strcpy(aux,dic[i]);
			*(dic+i) = *(dic+i+1);
			dic[i+1] = aux;
		}
		//printf("%d %d\n",i+1,strcmp(dic[i],dic[i+1]));
	}
	for(i=0;i<names;i++)puts(dic[i]);
	printf("\n");
}

void main(){
	char dic[][MAX] = {"Jose","Manuel","Carlos","Ana"};
	//printf("%d",strcmp(dic[0],dic[1]));
	ordenarCadenas(dic);
}
