#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int*aPtr;
	int*bPtr;
	int*cPtr;
	int x,i;
	int k=0,u=0;;
	
	printf("Tamanho a: ");
	scanf("%d", &x);
	
	aPtr= (int*) malloc (x*sizeof(int));
	
	for(i=0;i<x;i++){
		printf("a[%d]= ",i);
		scanf("%d", (aPtr+i));
	}
	for(i=0;i<x;i++){
		printf("a[%d]= %d \n",i, *(aPtr+i));
	}
	
		for(i=0;i<x;i++){
		if(*(aPtr+i)%2==0)
		k++;
	}
	bPtr= (int*) malloc (k*sizeof(int));
	
	k=0;
	
	for(i=0;i<x;i++){
		if(*(aPtr+i)%2==0){
			*(bPtr+k)=*(aPtr+i);
			k++;
		}	
	}
	
	for(i=0;i<x;i++){
		if(*(aPtr+i)>0)
		u++;
	}
	cPtr= (int*) malloc (u*sizeof(int));
	
	u=0;
	
	for(i=0;i<x;i++){
		if(*(aPtr+i)>0){
			*(cPtr+u)=*(aPtr+i);
			u++;
		}	
	}
	
	printf("\n");
	for(i=0;i<k;i++){
		printf("b[%d]= %d \n", i, *(bPtr+i));
	}
	
	printf("\n");
	for(i=0;i<u;i++){
		printf("c[%d]= %d \n", i, *(cPtr+i));
	}
	free(aPtr);
	free(bPtr);
	free(cPtr);
	
	return 0;
}
