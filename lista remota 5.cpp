#include <stdio.h>

/*Escreva um programa que permita armazenar dados sobre o estoque de vinhos
de uma adega que tem seguintes funcionalidades:
• Mostrar um menu para usuário:
 1 para vinho tinto
 2 para vinho branco
 3 para vinho rosê
• Entrada de dados indicando a quantidade e o tipo de vinho para incluir no
estoque
• Entrada de dados indicando a quantidade e o tipo de vinho para retirar do
estoque
• Demostrar a situação no estoque especificando a quantidade de cada tipo
de vinho e a porcentagem de cada tipo sobre o total geral de vinhos.*/

float v1,v2,v3,r1,r2,r3,k1,k2,k3,t,t1,t2,t3;
int c=1;


int main(){
	


while(c!=0){

printf("\nDigite: \n"
		"0 para interromper o programa\n"
		"1 para vinho tinto\n"
		"2 para vinho branco\n"
		"3 para vinho rose\n\n");	
		
scanf("%d", &c);

	switch (c){
		
		case 1:
			printf("\nQuantidade para incluir no estoque: \n");
			scanf("%f", &v1);
			
			printf("\nQuantidade para retirar do estoque: \n");
			scanf("%f", &r1);
			break;
			
			
		case 2:
			printf("\nQuantidade para incluir no estoque: \n");
			scanf("%f", &v2);
			
			printf("\nQuantidade para retirar do estoque: \n");
			scanf("%f", &r2);
			break;
			
		case 3:
			printf("\nQuantidade para incluir no estoque: \n");
			scanf("%f", &v3);
			
			printf("\nQuantidade para retirar do estoque: \n");
			scanf("%f", &r3);
			break;
			
		default:
			printf("\nValor invalido\n");
	}
	

	
}
	k1=v1-r1;
	k2=v2-r2;
	k3=v3-r3;
	t= k1+k2+k3;
	t1=(k1/t)*100;
	t2=(k2/t)*100;
	t3=(k3/t)*100;
	
	printf("\nQuantidade de vinho tinto: %.0f\n", k1);
	printf("\nsituacao do estoque em porcentagem: %.2f\n", t1 );
	
	printf("\nQuantidade de vinho branco: %.0f\n", k2);
	printf("\nsituacao do estoque em porcentagem: %.2f\n", t2);
	
	printf("\nQuantidade de vinho rose: %.0f\n", k3);	
	printf("\nsituacao do estoque em porcentagem: %.2f\n", t3);
}
