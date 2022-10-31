#include <stdio.h>

/*  Escreva um programa que solicite ao usuário três números inteiros a, b, c. O
programa deve somar todos os inteiros entre b e c que sejam divisíveis por
número a.  */

int a,b,c;
int som=0;

int main(){
	
	
	
	printf(" Digite o valor de a:\n");
	scanf("%d", &a);
	
	printf(" Digite o valor de b:\n");
	scanf("%d", &b);
	
	printf(" Digite o valor de c:\n");
	scanf("%d", &c);
	
	while(b<=c){
		
	b++;
		
	if(b%a==0){
		
	som = som + b;
		
	}
	
	}
	
	printf("Resultado: %d", som);
	
	
}
