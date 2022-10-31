#include <stdio.h>

/*A secretaria de meio ambiente que controla o índice de poluição mantém três grupos de indústrias que são altamente poluentes. 
O índice de poluição aceitável varia de 0.05 até 0.25. Se o índice ultrapassa 0.3 as indústria do grupo 1 são intimadas a 
suspenderem as suas atividades. Se o índice ultrapassar 0.4, as indústrias do grupo 1 e 2 devem suspender as suas atividades. 
Se o índice ultrapassar 0.5 todos os grupos devem ser notificados.

Escreva um algoritmo que receba o índice de poluição medido e emita a notificação adequada para os diferentes grupos de indústria.*/

int main(){
	
	float x; //indice de poluicao
	
	printf("Digite o indice de poluicao: \n");
	scanf("%f", &x);
	
	if(x<=0.25 && x>=0.05){
		
		printf("Bom indice de poluicao");
		
	}
		
		
	
	if (x>0.3 && x<=0.4){
		
			printf("Industrias do grupo 1 intimadas a suspenderem as atividades");
		
	}

	
	if(x>0.4 && x<=0.5){
		
		printf("Industrias dos grupos 1 e 2 intimadas a suspenderem as atividades");
		
	}
	
	
	if(x>0.5){
		
		printf("Industrias dos grupos 1, 2 e 3 intimadas a suspenderem as atividades");
		
	}
	
	
	
}
