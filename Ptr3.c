#include <stdio.h>

int main(){

//atribuir pra ptr o endereco do primeiro elemento do vetor (ptr=v)
//atribuir pra ptr o endereco de um elemento especifico do vetor *(vPtr+i)

int v[10] = {10, 100, 200, -3, 1, 0, 45, 67, 8, 23};
int i;
int*ptr;

ptr=v;
for(i=0; i<10; i++){

/*printf("Endereco de v[%d] = %p \n", i,ptr);
printf("Valor de v[%d] = %d \n", i, *ptr);*/
//ptr++; //fazer o deslocamento pro prox elemento do vetor

printf("Endereco de v[%d] = %p \n", i,ptr+i);
printf("Valor de v[%d] = %d \n", i, *(ptr+i));


}
    return 0;
}
