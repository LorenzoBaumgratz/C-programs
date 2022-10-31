#include <stdio.h>
//criar ponteiro para ponteiro (int**pPtr)
//valor final **pPtr

int main(){
    int var;
    int*ptr;
    int**pptr;

    var=5;

    ptr=&var;

    pptr=&ptr;

    printf("\n Valor da var: %d", var);
    printf("\n Endereco da var: %p \n", &var);
    printf("\n------------------------------------\n");

    printf("\n Valor de *ptr = %d", *ptr);
    printf("\n Endereco de ptr: %p \n", &ptr);
    printf("\n Endereco armazenado em ptr: %p", ptr);
    printf("\n------------------------------------\n");

    printf("\n Valor de **pptr = %d", **pptr);
    printf("\n Endereco de pptr: %p", &pptr);
    printf("\n Endereco armazenado em pptr = %p \n", pptr);

    return 0;

}
