/*Diálogo con la computadora: La computadora hace dos preguntas:
¿Te gusta bailar: (S/N) ?
¿Te gusta cantar: (S/N) ?
Si la respuesta fue: SS; la computadora responde: Llévame contigo
Si la respuesta fue: SN; la computadora responde: Te voy a enseñar a cantar
Si la respuesta fue: NS; la computadora responde: Te voy a enseñar a bailar
Si la respuesta fue: NN; la computadora responde: Fuera de acá aburrido.
*/
#include<stdio.h>
void main(void){
	char a,b;
	printf("¿Te gusta bailar: (S/N)? ");	scanf("%c",&a);
	printf("¿Te gusta cantar: (S/N)? ");	scanf("%c",&b);
	scanf("%c",&b);
	if(a=='s')
		if(b=='s')	printf("Llévame contigo");
		else			printf("Te voy a enseñar a cantar");  
	if(a=='n')
		if(b=='s')	printf("Te voy a enseñar a bailar");  
		else 			printf("Fuera de acá aburrido");
printf("\n");
}
