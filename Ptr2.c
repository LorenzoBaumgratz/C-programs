#include <stdio.h>

int main(){
    int y=7;
    int*yPtr; //criando ponteiro

    yPtr = &y; //armazena o endereço da var y

    printf("Endereco da var y: %p \n", &y);

    printf("Endereco armazenado na var yPtr: %p \n", yPtr);

    printf("Valor de Y: %d \n", y);

    printf("Valor de *yPtr: %d \n", *yPtr);

    return 0;
}
