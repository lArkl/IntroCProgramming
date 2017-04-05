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
	int elements;
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
	q->elements=0;
}

void enqueue(processQueue *q, node *n){
	if(q->last==NULL){
		q->first=n;
		q->last=n;
	}else{
		q->last->next=n;
		q->last=n;
	}
	q->elements++;
}

node *dequeue(processQueue *q){
	node *n;
	if(q->first!=NULL){
		n=q->first;
		q->first=q->first->next;
		q->elements--;
	}	
	return n;
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
void insertionSort(int n, process *p){
	int i,j;
	for(i=0;i<n;i++){
		j=i;
		while(j>0 && p[j-1].aT > p[j].aT){
			process aux;
			aux=p[j-1];
			p[j-1]=p[j];
			p[j]=aux;
			j--;
		 }
	}
}

void roundRobin(processQueue *q,int n,process *p){
	int quantum,i,time=0;
	printf("Ingrese quantum: ");scanf("%d",&quantum);
	//sort first and then comes the creation of nodes
	insertionSort(n,p);
	node *nodes[n];
	for(i=0;i<n;i++){
		nodes[i]=(node *)malloc(sizeof(node));
		nodes[i]->arrival=p[i].aT;
		nodes[i]->completion=p[i].bT;
		nodes[i]->id=p[i].id;
		nodes[i]->next=NULL;
	}
	
	int diff=nodes[0]->arrival;
	enqueue(q,nodes[0]);
	node *actual;
	while(q->elements!=0){
		//arrival times
		actual=dequeue(q);
		printf("actual: %d\n",actual->id);
		actual->p->wT+=time;		
		//p[actual->id-1]-=time;
		for(i=0;i<n;i++){
			if(nodes[i]->arrival==-1)continue;
			if(nodes[i]->arrival>0)nodes[i]->arrival-=diff;
			if(nodes[i]->arrival<=0){
				nodes[i]->arrival=-1;//marca de proceso alcanzado
				if(actual!=nodes[i])enqueue(q,nodes[i]);
				printf("%d\t",i);
			}
		}
		//completion time
		if(actual->completion<=quantum)
			diff=actual->completion;
		else {
			diff=quantum;
		}
		for(i=0;i<n;i++){
			if(nodes[i]->arrival==-1)continue;
			if(nodes[i]->arrival>0)nodes[i]->arrival-=diff;
			if(nodes[i]->arrival<=0){
				nodes[i]->arrival=-1;//marca de proceso alcanzado
				if(actual!=nodes[i])enqueue(q,nodes[i]);
				printf("%d\t",i);
			}
		}
		actual->completion-=diff;
		time+=diff;
		if(actual->completion<=0){
			actual->p->tT=time;
		}else{
			actual->p->wT-=time;
			enqueue(q,actual);
		}
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
		int at,bt;
		printf("\nProceso %d\n",k+1);
		printf("Ingresar arrival time: "); scanf("%d",&at);
		printf("Ingresar burst time: "); scanf("%d",&bt);
		setProcess(&p[k],at,bt);
	}
	printProcess(n,p);
	roundRobin(&q,n,p);
}
