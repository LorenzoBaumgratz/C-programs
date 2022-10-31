#include <stdio.h>

/*Escreva um programa que receba um vetor e calcule o
 elemento maximo (em valor absoluto)*/
int v[3], i;
int m; //valor maximo

int main(){

for(i=0; i<3; i++){
printf("Digite o valor da posicao %d do vetor: ", i);
scanf("%d", &v[i]);

if( v[i]<0){

v[i]= -1* v[i];

}
if(m<v[i]){
m=v[i];
}
}
printf("Valor maximo: %d ", m);
}
