#include <stdio.h>
#include <stdlib.h>

int main(){
int*vPtr;
int*auxPtr;
int size, i;

printf("Tamanho do vetor: \n");
scanf("%d",&size);

//alocação
vPtr= (int*) malloc(size*sizeof(int));

//input
auxPtr=vPtr;
printf("\n Data input \n");
for(i=0;i<size;i++){
printf("v[%d] = ", i);
scanf("%d", &auxPtr[i]);
}
//output
auxPtr=vPtr; //pq preciso disso se ja reinicio no proprio for?
printf("\n Data output: \n");
for(i=0;i<size;i++){
printf("v[%d] = %d \n", i, *(auxPtr+i));
}
return 0;
}
