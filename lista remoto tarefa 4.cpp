#include <stdio.h>

/*Dado um número natural n (fornecido pelo usuário), calcular a soma:
1/1  +1/2  + ... +  1/n    */

float n;
float som=0;

int main(){
	
	printf("Digite um valor de n diferente de 1: \n");
	scanf("%f", &n);
	
	while (n>1){
			
		som = som + (1/n);
		n--;
		
	}
	
	printf("Soma = %.2f", som);
	
}
