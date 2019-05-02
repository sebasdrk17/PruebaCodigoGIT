#include<stdio.h>
void main(){
	int i,vec[5][5],j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			vec[i][j]=i*5;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("[%d][%d]=%d\n",i,j,vec[i][j]);
		}
	}
}
