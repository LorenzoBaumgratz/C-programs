#include <stdio.h>

int main(){
	int d;
	int fat(int n);
	scanf("%d", &d);
	printf("Resposta: %d", fat(d));
}

int fat(int n){
int Fat=1;
while(n>0){
	
	Fat= Fat*n;
	n--;
	
}
	return Fat;
}
