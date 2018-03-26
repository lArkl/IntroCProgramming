#include<stdio.h>
#include<math.h>
float V[3][2];
void conversion(float V[3][2],int c);
void suma(float V[3][2],int c);
void main(void){
	int c,i,j;
	for(i=0;i<2;i++){
		printf("Ingrese vector %d\n",i+1);
		for(j=0;j<2;j++){	
			printf("Ingrese valor %d: ",j+1);scanf("%f",&V[i][j]);
		}
	}
	printf("Coordenadas: \n");
	printf("1. cartesianas\n");
	printf("2. polares\n");
	printf("Escoja sus coordenadas: "); scanf("%d",&c);
	suma(V,c);
}
void conversion(float V[3][2],int c){
	int i;
	float m,n;
	if(c==2){					//conversion a cartesiano
		for(i=0;i<2;i++){
			m=V[i][0];
			n=V[i][1];
			V[i][0]=m*cos(n);
			V[i][1]=m*sin(n);
		}
	}else{						//Conversion a Polares
		m=V[3][0];
		n=V[3][1];
		V[3][0]=sqrt(m*m+n*n);
		V[3][1]=atan2(n,m);		
	}
}
void suma(float V[3][2],int c){
	if(c==1){
		V[3][0]=V[0][0]+V[1][0];
		V[3][1]=V[0][1]+V[1][1];
	}
	else{
		conversion(V,2);
		V[3][0]=V[0][0]+V[1][0];
		V[3][1]=V[0][1]+V[1][1];
		conversion(V,1);
	}
	printf("Suma: (%.2f,.%.2f)\n",V[3][0],V[3][1]);
}
