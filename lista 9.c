#include <stdio.h>

int main(){
	
	int a[10],b[10],i;
	
	int*v[10];
	
	
	for(i=0;i<10;i++){
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++){
		printf("b[%d]= ",i);
		scanf("%d", &b[i]);
	}
	printf("Conferir: \n");
	for(i=0;i<10;i++){
		printf("a[%d]=%p \n",i,&a[i]);
		printf("b[%d]=%p \n",i,&b[i]);
	}
	
	
		for(i=0;i<10;i++){
		if(a[i]>b[i])
		v[i]=&a[i];
		else
		v[i]=&b[i];
	}
	printf("Vetor de ponteiros \n");
		for(i=0;i<10;i++){
		printf("v[%d]=%p \n",i,v[i]);
		
	}	
		
	
		
	
}
