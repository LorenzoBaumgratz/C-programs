#include <stdio.h>
#include <stdlib.h>
/* escreva uma função que receba dois vetores com tamanho def pelo usuario
 e devolva um terceiro vetor que inlcui os dois */
int main(){
    int x1,x2;
    int*v1Ptr;
    int*v2Ptr;
    int*v3Ptr;
    int i,j;

printf("Tamanho 1: \n");
scanf("%d" ,&x1);
printf("Tamanho 2: \n");
scanf("%d" ,&x2);

v1Ptr= (int*) malloc(x1*sizeof(int));
v2Ptr= (int*) malloc(x2*sizeof(int));
v3Ptr= (int*) malloc((x1+x2)*sizeof(int));

for(i=0;i<x1;i++){
printf("v1[%d]= ",i);
scanf("%d",(v1Ptr+i));
}
for(i=0;i<x2;i++){
printf("v2[%d]= ",i);
scanf("%d",(v2Ptr+i));
}
 for(i=0;i<x1;i++){
*(v3Ptr+i)=*(v1Ptr+i);
}
i=0;
for(j=x1;j<(x1+x2);j++){
*(v3Ptr+j)=*(v2Ptr+i);
i++;}


printf("\n -----------Vetor final ----------- \n");
for(i=0;i<(x1+x2);i++)
printf("v[%d] = %d \n", i,*(v3Ptr+i));

}
