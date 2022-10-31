#include <stdio.h>
//Escreva um algoritmo que receba um número inteiro positivo e devolva a soma de seus algarismos.
int main(){

	int n,soma;
	soma=0;


	printf("Digite um numero inteiro: \n");
	scanf("%d", &n);

	while(n>0){

		//1234



		soma = soma + n%10;
		n = n/10;

	}

	printf("Soma igual a: %d", soma);
}
