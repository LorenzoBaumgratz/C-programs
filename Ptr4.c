#include <stdio.h>

const int a=10;

int main(){
int v[]= {10, 100, 200, -3, 1, 0, 45, 67, 8, 23};
int i,*ptr;

i=0;
ptr=v;

while(ptr<=&v[a-1]){
printf("\n Endereco de v[%d] = %p \n", i,ptr);
printf("Valor de v[%d] = %d \n", i, *ptr);

ptr++;
i++;
}

}
