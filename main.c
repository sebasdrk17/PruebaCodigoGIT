#include<stdio.h>
void main(){
	int i,vec[10],y;
	for(i=0;i<10;i++){
		vec[i]=i*5;
	}
	for(y=0;y<10;y++){
		printf("%d",vec[y]);
	}
}
