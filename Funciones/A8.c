#include<stdio.h>
void main(void){
	int aa[8]={1,2,3,3,6,7,7,7};
	int i,t,j;
	//printf("aa={");
/*	for(j=0;j<7;j++){
		for(i=0;i<7;i++){
			if(aa[i+1]%2==0){
				t=aa[i];
				aa[i]=aa[i+1];
				aa[i+1]=t;
				i++;}
			}
	}
	for(i=0;i<8;i++){
		printf("%d",aa[i]);
		if (i==7)printf("}\n");
		else printf(",");
	}*/
	int m[8][2]={0,0,0,0,0,0,0,0,0,0,0,0},k=0;
	m[0][0]=aa[0];
	for(i=1;i<9;i++){
		m[k][1]++;
		if(aa[i-1]!=aa[i]){
			m[k][0]=aa[i-1];
			printf("%d:%d\n",m[k][0],m[k][1]);
			k++;
		}		
	}
	/*for(i=k;i>0;i--){
		printf("%d:%d\n",m[i][1],m[i][2]);
	}*/
}
