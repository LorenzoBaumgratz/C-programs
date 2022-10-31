#include <stdio.h>

/*Escreva um programa que recebe uma quantidade arbitrária de números
positivos e mostra qual foi:
• o maior dos números fornecidos pelo usuário
• o menor dos números fornecidos pelo usuário*/

int main(){
	
	int n, maior, menor;
	n=-1;
	

	
	while(n<0){
	
	
	printf("Digite um numero positivo para a sequencia: \n");
	scanf("%d", &n);
	
	maior=n;
	menor=n;
	
	if(n<0)
	printf("Valor invalido\n");	
	


	
	}
		
	while (n!=0){
		
	printf("Digite um numero positivo para a sequencia: \n");
	scanf("%d", &n);
		
		if(n<0){
			printf("Valor invalido\n");
			break;
		}
		if(n==0){
		break;	
		}
	
	
		if(n>maior){
		maior=n;	
		}
		
		if(n<menor){
		menor=n;	
		}
}
	
	
	
	printf("Maior numero: %d\nMenor numero: %d", maior, menor);
	
	
}
