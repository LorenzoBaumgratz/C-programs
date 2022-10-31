#include <stdio.h>

int main(){
	int i;
	int a[5];
	
	for(i=0;i<5;i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	printf("Elementos impar: %d \n", impar(a,5));
	printf("Soma dos elementos positivos = %d \n", sump(a,5));
}
int impar(int*v,int size){
	int i;
	int x=0;
	
	for(i=0;i<size;i++){
		if(*(v+i)%2==1|| *(v+i)%2==-1 )
		x++;
	}
	return x;
}
int sump(int*v,int size){
	int som=0;
	int i=0;
	for(i=0;i<size;i++){
		if(*(v+i)>=0)
		som+=*(v+i);
		
	}
	return som;
}
