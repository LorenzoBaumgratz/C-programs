#include <stdio.h>


//Achar a soma dos numeros multiplos de 5 no intervalo de -10 a 20
int main(){

int n, soma;
soma=0;

for (n=-10; n<=20; n++){

if(n%5==0){


printf("%d ", n);
soma = soma + n;

}



}

printf("\n a soma e %d ", soma);




}

