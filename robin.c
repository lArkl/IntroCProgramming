#include<stdio.h>
#include<stdlib.h>

typedef struct process{
	int id;
	int aT;
	int bT;
	int tT;
	int wT;
}process;

typedef struct node{
	int id;
	struct node *next;
	int aT;
	int cT; 
}

typedef struct processQueue{
	int time;
	process *last;
	process *first;
}processQueue;

void initQueue(processQueue *q){
	q->last=NULL;
	q->first=NULL;
	q->time=0;
}

void enqueue(processQueue *q, process *p){
	if(q->last==NULL){
		q->first=p;
		q->last=p;
	}else{
		q->last->next=p;
		q->last=p;
		p->next=NULL;
	}
}

void printProcess(processQueue q){
	process *p;
	printf("ID\tAT\tCT\n");
	printf("==\t==\t==\n");
	for(p=q.first;p!=NULL;p=p->next){
		printf("%d\t%d\t%d\n",p->id,p->arrivalT,p->completionT);
	}
}

void printGantt(processQueue q){
	process *p;
	for(p=q.first;p!=NULL;p=p->next){
		printf("|P%d",p->id);
	}printf("|\n0");
	for(p=q.first;p!=NULL;p=p->next){
		int i;
		printf("  %d",p->completionT);
	}printf("\n");
}

void setProcess(process *p,int at, int ct){
	static int x=1;
	p->id=x;
	p->arrivalT=at;
	p->completionT=ct;
	p->progress=0;
	x++;
}

void roundRobin(processQueue *q,process *p){
	int quantum;
	printf("Ingrese quantum: ");scanf("%d",&quantum);
	process *pr;
	//sort first
	pr=p[0];
	int diff;
	
	diff=pr->completionT-pr->progress;
	if(diff<quantum){
		pr->progress=pr->completionT;
		q->time+=diff;
	}else{
		pr->progress+=quantum;
		q->time+=quantum;
		//arrival time
		
	}
	
	
}

void main(){
	printf("Inicio de cola de procesos\n");
	processQueue q;
	initQueue(&q);
	//FILE *fp;
	//fp=fopen("procesos.csv","r");
	int n,k;
	printf("Cantidad de procesos a ingresar?: ");scanf("%d",&n);
	process p[n];
	char ans='s';
	for(k=0;k<n;k++){
		int at,ct;
		printf("Proceso %d\n",k+1);
		printf("Ingresar arrival time: "); scanf("%d",&at);
		printf("Ingresar completion time: "); scanf("%d",&ct);
		//p=(process *)malloc(sizeof(process));
		setProcess(&p[k],at,ct);
		//system("clear");
	}
	//enqueue(&q,p);
	roundRobin(&q,p);
	printProcess(q);
	printGantt(q);
}
