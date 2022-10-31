#include <stdio.h>
int max(int*v, int size);
int*neg(int*v,int size1,int*l,int size2);
int main(){
	int*auxPtr;
	int a[10],b[5],i;
	
	for(i=0;i<10;i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<5;i++){
		printf("b[%d]= ", i);
		scanf("%d", &b[i]);
	}
	
	auxPtr=neg(a,10,b,5);
	
	for(i=0;i<10;i++){
		printf("a[%d] = %d \n", i,*(auxPtr+i));
		
	}
}
int max(int*v, int size){
	int i,maior;
	maior=*v;
	
	for(i=0;i<size;i++){
		if(*(v+i)>maior)
		maior=*(v+i);
	}
	
	return maior;
}
int*neg(int*v,int size1,int*l,int size2){
	
	int max(int*v,int size1);
	int i;
	for(i=0;i<size1;i++){
		if(*(v+i)<0)
		*(v+i)=max(l,size2);
		
	}
	return v;
}
