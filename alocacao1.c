#include <stdio.h>
#include <stdlib.h>
/* void*calloc(int num, int size) - aloca a memoria para um vetor de num elem e com tamanho size de
cada um deles;
void free(void*address) -libera a memoria;
void*malloc(int num)  - aloca a mem pra num bites;
void*realloc(void*address, int newsize) - redimensiona a memoria alocada para adress para novo
tamanho newsize;
sizeof(dataType); -tamanho do tipo de dado*/
int main(){
//criar vetor de tamanho variavel
int*vPtr;
int size;
int i;

printf("Tamanho do vetor: \n");
scanf("%d", &size);

//alocação de memória
vPtr= (int*) malloc(size*sizeof(int));

printf("\n Data input\n");
for(i=0;i<size;i++){
printf("v[%d]= ", i);
scanf("%d", &vPtr[i]);
}
printf("\n Data output \n");
for(i=0;i<size;i++){
printf("v[%d] = %d \n", i, *(vPtr+i));

}
}
