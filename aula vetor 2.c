#include <stdio.h>

/*Escreva um programa que receba uma sequencia de numeros
 interios e mostre a sequencia na ordem inversa*/

int main(){


int c[3], i;


for(i=0; i<3; i++){

printf("Digite o elemento %d do vetor: ", i);
scanf("%d", &c[i]);
}
for (i=2; i>=0; i--){
printf("%d ", c[i]);


}


}


