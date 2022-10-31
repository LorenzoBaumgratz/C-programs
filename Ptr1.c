#include <stdio.h>
// Ponteiros;;;; é uma variavel que armazena o endereco da memoria de uma outra variavel
/*
o- octal
x-hexadecimal inteiro
e-notacao cientifica
a-hexadecimal float
p- endereço do ponteiro
criar ponteiro: type*varName
type-tipo de dados que o ponteiro vai apontar
varName- nome do ponteiro*/
int main(){
 int var1;
 char var2[10];
 int*var1Ptr;
 printf("Endereco da var1: %p \n", &var1);
 printf("Endereco da var2: %p \n", &var2);


return 0;
}
