#include<stdio.h>

void main(void){
	int arr[2][3][4], *ptr = arr,i;
	for(i=0;i<24;i++){
		*(ptr+i)=i;
	}	
	printf("A(1,2,2): %d\n",arr[1][2][2]);

}
