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
	process *p;
	int arrival;
	int completion;
	struct node *next;
}node;

typedef struct processQueue{
	int time;
	node *actual;
	node *last;
	node *first;
}processQueue;

void setProcess(process *p,int at, int bt){
	static int x=1;
	p->id=x;
	p->aT=at;
	p->bT=bt;
	p->tT=0;
	p->wT=0;
	x++;
}

void initQueue(processQueue *q){
	q->last=NULL;
	q->first=NULL;
	q->actual=NULL;
	q->time=0;
}

void enqueue(processQueue *q, node *n){
	if(q->last==NULL){
		q->first=n;
		q->last=n;
	}else{
		q->last->next=n;
		q->last=n;
		n->next=NULL;
	}
}

void printProcess(int n, process *p){
	printf("ID\tAT\tBT\tTT\tWT\n");
	printf("==\t==\t==\t==\t==\n");
	int i;
	for(i=0;i<n;i++){
		printf("%d\t%d\t%d\t%d\t%d\n",p[i].id,p[i].aT,p[i].bT,p[i].tT,p[i].wT);
	}
}
/*
void printGantt(processQueue q){
	process *p;
	for(p=q.first;p!=NULL;p=p->next){
		printf("|P%d",p->id);
	}printf("|\n0");
	for(p=q.first;p!=NULL;p=p->next){
		int i;
		printf("  %d",p->completionT);
	}printf("\n");
}*/

void roundRobin(processQueue *q,int n,process *p){
	int quantum,i;
	printf("Ingrese quantum: ");scanf("%d",&quantum);
	node *nodes[n];
	//sort first and then comes the creation of nodes
	for(i=0;i<n;i++){
	  nodes[i]=(node *)malloc(sizeof(node));
	  nodes[i]->arrival=p[i].aT;
	  nodes[i]->completion=p[i].bT;
	  nodes[i]->id=p[i].id;
	}
	q->time+=nodes[0]->arrival;
	enqueue(q,nodes[0]);
	node *actual=q->first
	//while(actual!=NULL){
	  if()
	//}
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
		int at,bt;
		printf("Proceso %d\n",k+1);
		printf("Ingresar arrival time: "); scanf("%d",&at);
		printf("Ingresar burst time: "); scanf("%d",&bt);
		//p=(process *)malloc(sizeof(process));
		setProcess(&p[k],at,bt);
		//system("clear");
	}
	//enqueue(&q,p);
	printProcess(n,p);
}
