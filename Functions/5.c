/*Pida ingresar dos vectores de R 3 . Luego, los sume, reste y multiplique, tanto escalar como
vectorialmente, imprimiendo despus todos estos resultados. Para ello se deberá implementar las
funciones suma(), resta(), productoEscalar() y productoVectorial().*/
#include<stdio.h>
void resta(float a[3][2]);
void suma(float a[3][2]);
void productoEscalar(float a[3][2]);
void productoVectorial(float a[3][2]);
void main(void){
	int i,k=1;
	float a[3][2];
	char E[3]={"xyz"};
	do{
		printf("Vector %d:\n",k);
		for(i=0;i<3;i++){
			printf("Ingrese valor en el eje %c: ",E[i]); 
			scanf("%f",&a[i][k-1]);
		}k++;
		}while(k<3);
	suma(a);
	resta(a);
	productoEscalar(a);
	productoVectorial(a);
}
void suma(float a[3][2]){
	int i;
	printf("La suma es : (");
	for(i=0;i<2;i++){
	printf("%.2f,",a[i][0]+a[i][1]);
	}printf("%.2f)\n",a[2][0]+a[2][1]);
}
void resta(float a[3][2]){
	int i;
	printf("La resta es : (");
	for(i=0;i<2;i++){
	printf("%.2f,",a[i][0]-a[i][1]);
	}printf("%.2f)\n",a[2][0]+a[2][1]);
}
void productoEscalar(float a[3][2]){
	int i;
	float p=0;
	for(i=0;i<3;i++){
		p+=a[i][0]*a[i][1];
	}printf("El producto escalar es %.2f\n",p);
}
void productoVectorial(float a[3][2]){
	int i,m,n;
	printf("El P. vectorial es : (");
	for(i=0;i<2;i++){
		m=(i==0)?1:0;
		n=(i==1)?2:m+1;
		printf("%.2f,",a[m][0]*a[n][1]-a[n][0]*a[m][1]);
	}printf("%.2f)\n",a[0][0]*a[1][1]-a[1][0]*a[0][1]);
}
