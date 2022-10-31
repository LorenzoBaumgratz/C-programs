#include <stdio.h>

//Dado um número inteiro n>0. Determine n!

int main(){
	
	int n; //numero fatorial
	int fat=1; //operacao fatorial
	
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &n);
	
	for(n; n>1; n--){
		
		fat=fat*n;
			
	}

	printf("%d! = %d", n, fat);
}
