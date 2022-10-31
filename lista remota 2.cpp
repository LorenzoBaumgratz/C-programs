#include <stdio.h>

/*Escreva um programa para calcular a média aritmética de um conjunto de
números pares positivos fornecidos pelo usuário.
• Observe que nada impede que o usuário forneça números ímpares ou
negativos, com a ressalva de que eles não poderão ser usados no cálculo
da média aritmética.
• O programa deve realizar a contagem de tentativas de entrada de dados
inválidos.*/

float med;
int som=0;
int n;
int x=0; //contador de numeros validos
int y=0; //contador de numeros invalidos


int main(){
	//para parar o programa digite "1000".
	while(n!=1000){
	
	printf("Digite um numero: \n");
	scanf("%d", &n);
	
	if(n==1000){
	break;	
	}
	
	if(n%2==0 && n>=0){
	
	som = som + n;
	x++;
		
	}else{
		
		printf("Numero invalido\n\n");
		y++;
		
	}	
	}

	med = som/x;
	printf("Media: %.2f\n", med);
	printf("Tentativas invalidas: %d", y);
	
}
