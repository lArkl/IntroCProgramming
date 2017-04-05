#include<stdio.h>

void main(){
	int flag = 0;
	int timeSlice;
	FILE * file = fopen("process", "r");	
	printf("Ingresar time slice: ");scanf("%d",&timeSlice);
	printf("%d\n\n", timeSlice);
	int arrivalTime[10], burstTime[10], responseTime[10], finishTime[10],waitingTime[10];
	int remainingProcesses, processCount = 0;
	if (!(file == NULL)){
		while (fscanf(file, "%d", &arrivalTime[processCount])){
			if (arrivalTime[processCount] == -1)break;
			fscanf(file, "%d", &burstTime[processCount]);
			responseTime[processCount] = burstTime[processCount];
			waitingTime[processCount]=-arrivalTime[processCount];
			processCount++;
		}
		remainingProcesses = processCount;
		fclose(file);
	}
	printf("  ID\t|  AT\t|  BT\t|  CT\t|  TT\n");
	printf("=========================================\n");
	int i = 0; int time = 0;
	while (remainingProcesses != 0){
		if (responseTime[i] <= timeSlice && responseTime[i]>0){
			time += responseTime[i];
			responseTime[i] = 0;
			waitingTime[i]-=time;
			flag = 1;
		}
		else 
			if (responseTime[i] > 0){
				responseTime[i] -= timeSlice;
				time += timeSlice;
				waitingTime[i]-=time;
			}
		if (responseTime[i] == 0 && flag == 1){
			finishTime[i] = time;
			remainingProcesses--;
			printf("  P[%d]\t|  %d\t|  %d\t|  %d\t|  %d\t|\n", 
			i + 1, arrivalTime[i], burstTime[i], finishTime[i],  
			finishTime[i] - arrivalTime[i]);
			flag = 0;
		}
		if (i == processCount - 1)i = 0;
		else 
			if(arrivalTime[i + 1] <= time)i++;
			else{
				time++;
				i = 0;
			}
	}
}
