#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a[6],i;
	int x=0;
	int*bPtr;
	int k=0;
	
	for(i=0;i<6;i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<6;i++){
		if(a[i]>0){
			x++;
		}
	}
	bPtr= (int*) malloc (x*sizeof(int));
	
		for(i=0;i<6;i++){
		if(a[i]>0){
			*(bPtr+k)=a[i];
			k++;
		}
	}
	for(i=0;i<x;i++){
		printf("b[%d]= %d \n", i, *(bPtr+i));
	}
	return 0;
}
