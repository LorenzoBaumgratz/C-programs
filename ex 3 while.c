#include <stdio.h>
//Dados dois números inteiros n e k, com k=0 e n!=0. Escreva um algoritmo usando um comando de repeticao que calcule  n^k 
int main(){

int n; //base da potencia
int k,pot;
pot=1;
k=1;

//n=3; k=4

printf("Digite a base da potencia:\n");
scanf("%d", &n);

while(k<=4){
	
	
pot = n*pot;
k++;
	
	printf("%d ", pot);
}



}










