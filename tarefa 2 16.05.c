#include <stdio.h>

/*A secretaria de meio ambiente que controla o �ndice de polui��o mant�m tr�s grupos de ind�strias que s�o altamente poluentes. 
O �ndice de polui��o aceit�vel varia de 0.05 at� 0.25. Se o �ndice ultrapassa 0.3 as ind�stria do grupo 1 s�o intimadas a 
suspenderem as suas atividades. Se o �ndice ultrapassar 0.4, as ind�strias do grupo 1 e 2 devem suspender as suas atividades. 
Se o �ndice ultrapassar 0.5 todos os grupos devem ser notificados.

Escreva um algoritmo que receba o �ndice de polui��o medido e emita a notifica��o adequada para os diferentes grupos de ind�stria.*/

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
