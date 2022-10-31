#include <stdio.h>
//mostrar os numeros inteiros pares e multiplos de 3 no intervalo de 1 ate N e calcular a soma deles
int main(){
int N, i;


printf("Digite um numero: ");
scanf("%d", &N);

if(N>=0){

    for(i=1; i<=N; i++){

        if( i%3==0 && i%2==0 )
            printf("%d ", i);
    }




}else
printf("Numero invalido, digite um valor positivo");
}
