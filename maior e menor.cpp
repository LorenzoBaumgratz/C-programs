#include <stdio.h>


//FILE:            MaiorMenor.c
//TITLE            Maior e Menor
//SUBMITTED BY:    Lorenzo Baumgratz and João Victor Pavan Silveira
//                 All code is my own except where credited to others.
//FOR COURSE:      Linguagem de Programção I
//DUE DATE:        June 10, 2022
//
//PURPOSE:
// this program will read an arbitrary count of positive numbers and show the lowest and the highest
//
//OVERALL METHOD:
//The list of general tasks is:
//1.The user will input positive numbers that will be analysed.
//2.The program will find the highest and lowest number between all of them.
//3.The program will output his conclusion.
//
//RESTRICTIONS:
//int:[-2147483647,2147483647]
//Memory Occupation: 130KB
//
// INCLUDED FILES:
// 	stdio.h
// 
// PARAMETERS:
// name         type  value/reference   description
// ---------------------------------------------------------------------
// n            int   value             input number
// maior        int   value             comparison auxiliary variable
// menor        int   value             comparison auxiliary variable


int main(){
	
	int n, maior, menor;
	n=-1;
	

	// obs: o usuario deve digitar 0 para interromper o programa.
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
