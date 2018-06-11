#include<stdio.h>
#include<stdlib.h>

#define MAXP 5

struct stand{
	int flagActivo;
	char nombreR[100];
	int numero;
	int duracion;
	float area;
	float precioTotal;
};

struct pabellon{
	float tarifa;
	float areaAlquilada;
	int cont;
	struct stand *stands;
};

void iniciarP(struct pabellon p[]){
	int i;
	for(i=0;i<MAXP;i++){
		p[i].tarifa = i+1;
		p[i].areaAlquilada = 0;
		p[i].cont = 0;
		p[i].stands = NULL;
	}
}

void incorporarStand(struct pabellon *p){
	struct stand s;
	printf("Ingrese nombre: "); scanf("%s",&s.nombreR);
	printf("Ingrese numero de pabellon: "); scanf("%d",&s.numero);
	printf("Ingrese dias de alquiler: "); scanf("%d",&s.duracion);
	printf("Ingrese area a alquilar: "); scanf("%f",&s.area);
	s.precioTotal = p[s.numero].tarifa * s.duracion * s.area;
	s.flagActivo = 1;
	p[s.numero].areaAlquilada += s.area;	
	p[s.numero].cont++;
	p[s.numero].stands = realloc(p[s.numero].stands,sizeof(struct stand)*(p[s.numero].cont));
	p[s.numero].stands[p[s.numero].cont-1] = s;
}

void mostrarInfoP(struct pabellon p[]){
	int i;
	for(i=0;i<MAXP;i++){
		printf("N Pabellon: %i\n",i);
		printf("Numero de stands: %d\n",p[i].cont);
		printf("Area alquilada: %f\n",p[i].areaAlquilada);
		printf("Tarifa: %f\n",p[i].tarifa);
	}
}

void mostrarInfoS(struct pabellon p){
	int i;
	printf("N Pabellon: %d\n",p.stands[0].numero);
	for(i=0;i<p.cont;i++){
		//printf("N Pabellon: %d\n",p.);
		printf("Nombre: %s\n",p.stands[i].nombreR);
		printf("Duracion: %d\n",p.stands[i].duracion);
		printf("Area alquilada: %f\n",p.stands[i].area);
		printf("Precio Total: %f\n",p.stands[i].precioTotal);
	}
}


void main(){
	struct pabellon pabellones[MAXP];
	iniciarP(pabellones);
	//mostrarInfoP(pabellones);
	incorporarStand(pabellones);
	mostrarInfoS(pabellones[0]);
}
