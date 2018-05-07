#include<stdio.h>

void main(void){
	int a = 5;
	int *p = &a;
	printf("%d\n",*p);
	printf("%p\n",p);
	printf("%p\n",&p);
	//----------------
	int arr[4]={2,4,3,5};
	int *p1 = arr;
	int *p2 = arr+2;
	printf("p1 = %d, p2= %d, p2-p1= %d\n",*p1,*p2,p2-p1);
}
