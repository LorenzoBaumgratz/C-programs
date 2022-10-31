#include <stdio.h>
int count(int*v,int size,int k);
int main(){
	
	int a[10],i,k;
	
	for(i=0;i<10;i++){
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
	printf("Verificar numero: ");
	scanf("%d", &k);
	
	printf("O numero %d apareceu %d vezes ", k,count(a,10,k));
}
int count(int*v,int size,int k){
	int i;
	int x=0;
	for(i=0;i<size;i++){
		if(*(v+i)==k)
		x++;
	}
	
	return x;
}
