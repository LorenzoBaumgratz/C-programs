#include <stdio.h>

//Escreva um programa que recebe uma quantidade arbitr�ria de n�meros inteiros positivos e calcula a soma dos n�meros pares.

int main(){
	
	int n;
	int soma=0;
	//para parar o programa digite "0".
	while(n>0){
		
		printf("Digite um numero inteiro positivo: \n");
	scanf("%d", &n);
		
		if(n%2==0){
		
	soma = soma + n;
		
	}
		
	}
	
	printf("Soma = %d", soma);
	
	
	
}
