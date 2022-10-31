#include <stdio.h>
//Dada uma sequencia de numeros inteiros deferentes de zero, terminada por zero, calcule a soma dos termos da sequencia
int main(){
int N, s, k;
int soma;

soma = 0;
N=1;
k=1;

while(k!=0){

 printf("Digite o %d numero da soma: ", N);
 scanf("%d", &k);


    N++;
    soma = soma + k;



}
printf("%d ", soma);





}
