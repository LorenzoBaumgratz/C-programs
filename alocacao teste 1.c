#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int*vPtr;
	int*auxPtr;
	int size;
	int i;
	
	printf("Size =  ");
	scanf("%d", &size);
	
	vPtr= (int*) malloc(size*sizeof(int));
	auxPtr=vPtr;
	
	//input
	printf("\n ---------Input ------- \n");
	for(i=0;i<size;i++){
		printf("\n v[%d]= ", i);
		scanf("%d", &vPtr[i]);
	}
	
	//output
	printf(" \n ---------- Output ---------- \n");
	for(i=0;i<size;i++){
		printf("v[%d] = %d \n", i, *(vPtr+i));
	}
}
