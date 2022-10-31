#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int*aPtr;
	int*bPtr;
	int*cPtr;
	int i,a,b;
	int x=0,k=0;
	
	printf("Tamanho de a: ");
	scanf("%d", &a);
	
	printf("Tamanho de b: ");
	scanf("%d", &b);
	
	aPtr= (int*) malloc(a*sizeof(int));
	bPtr= (int*) malloc(b*sizeof(int));
	
	for(i=0;i<a;i++){
		printf("a[%d] = ",i);
		scanf("%d", (aPtr+i));
	}
	for(i=0;i<b;i++){
		printf("b[%d] = ",i);
		scanf("%d", (bPtr+i));
	}
	
	for(i=0;i<a;i++){
		if(*(aPtr+i)%2==0)
		x++;
	}
	for(i=0;i<b;i++){
		if(*(bPtr+i)%2==0)
		x++;
	}
	cPtr= (int*) malloc(x*sizeof(int));
	
	for(i=0;i<a;i++){
		if(*(aPtr+i)%2==0){
			*(cPtr+k)=*(aPtr+i);
			k++;
		}
	}
	for(i=0;i<b;i++){
		if(*(bPtr+i)%2==0){
			*(cPtr+k)=*(bPtr+i);
			k++;
		}
	}
	printf("\nSaida:\n");
	for(i=0;i<x;i++){
		printf("c[%d]= %d \n", i, *(cPtr+i));
	}
}
