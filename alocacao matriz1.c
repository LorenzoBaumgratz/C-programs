#include <stdio.h>
#include <stdlib.h>
//matriz n x m -> indice = i*m+j
/*m= numero de colunas ; i= numero da linha de interesse; j= numero da coluna de interesse;
tamanho da memoria = m*n*(dataType);
pegar elemento especifico: *(matPtr+i*m+j) */
int main(){
int*matPtr;
int i,j,n,m;

printf("Linhas: \n");
scanf("%d", &n);

printf("Colunas: \n");
scanf("%d", &m);

matPtr= (int*) malloc(n*m*sizeof(int));

//input
printf("\n---------Entrada de dados---------- \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    printf("mat[%d][%d]= ", i,j);
    scanf("%d", (matPtr+i*m+j));

    }
}
//output
printf("\n---------Saida de dados---------- \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    printf("%5d ", *(matPtr+i*m+j));
    }
    printf("\n");
}
}
