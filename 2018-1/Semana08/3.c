#include<stdio.h>

void producto(int m,n,p, *arr1, *arr2,*prod){
	for(i=0;i<m*n*p;i++){
		//printf("%d %d %d\n",(i/p/n)%m,(i/p)%n,i%p);
		int a = (i/p/n)%m;
		int b =(i/p)%n;
		int c = i%p;
		*(prod+c+a*c) += *(arr1+b+b*a) * *(arr2+c+b*c);
	}
}

void llenar(int m, int n,int arr[][n]){
	int i,j;
	for(j=0;j<m;j++)
		for(i=0;i<n;i++)
			arr[j][i] = rand()%20;
}

void main(){
	int m=4,n=3,p=2;
	int m1[m][n],m2[n][p], mult[m][p];
	llenar(m,n,m1);
	llenar(n,p,m2);
	int i;
	int *prod,*arr1,*arr2;
	//prod[]
	producto(m,n,p,arr1,arr2,prod);
}
