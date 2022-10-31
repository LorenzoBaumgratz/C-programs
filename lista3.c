#include <stdio.h>
int msum(int*v,int size);
int min(int*v,int size);
int max(int*v,int size);
int main(){
	
	int a[10],i,k;
	
	for(i=0;i<10;i++){
		printf("[%d]= ",i);
		scanf("%d", &a[i]);
	}
	
	printf("Soma min+max = %d ", msum(a,10));
}
int msum(int*v, int size){
	int Min,Max;
	int min(int*v, int size);
	int max(int*v, int size);
	int x;
	
	Min= min(v,size);
	Max= max(v,size);
	
	x=Max+Min;
	
	return x;
}
int min(int*v, int size){
	int i,menor;
	menor=*v;
	for(i=0;i<size;i++){
		if(*(v+i)<menor)
		menor=*(v+i);
	}
	return menor;
}
int max(int*v,int size){
	int i,maior;
	maior=*v;
	for(i=0;i<size;i++){
		if(*(v+i)>maior)
		maior=*(v+i);
	}
	return maior;
}

