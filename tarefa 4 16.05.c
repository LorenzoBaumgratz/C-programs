#include <stdio.h>

//Dada uma sequência de números inteiros diferentes de zero (terminada por zero). Escreva um algoritmo que determine maior termo da sequência.

int main(){
	
	int n=1; //ultimo valor digitado da sequencia
	int x=0; //variavel auxiliar
	int maior; //maior valor assumido na sequencia
	int menor; //menor valor assumido na sequencia
	
	while(n!=0){
		
			
			printf("Insira um valor de cada vez para formar uma sequencia: \n");
		scanf("%d", &n);
		
		if(n==0){
		break;	
	}
		if(x==0){
			
		maior = n;
		menor = n;
		x++;	
		}
		if(n>maior){
		maior=n;	
		}
		if(n<menor){
			menor=n;
		}

		
			
			
			
		
	}
	
		printf("O maior termo da sequencia foi: %d", maior);
	
}
