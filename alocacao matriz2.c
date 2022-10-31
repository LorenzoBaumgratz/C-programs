#include <stdio.h>
#include <stdlib.h>

int main(){
int**matPtr;
int i,j,n,m;

printf("Linhas: \n");
scanf("%d", &n);

printf("Colunas: \n");
scanf("%d", &m);

matPtr= (int**) malloc(n*sizeof(int*));

//input
printf("\n---------Entrada de dados---------- \n");
for(i=0;i<n;i++){
    matPtr[i]= malloc(m*sizeof(int));
    for(j=0;j<m;j++){
    printf("mat[%d][%d]= ", i,j);
    scanf("%d", &matPtr[i][j]);
    }
}
//output
printf("\n---------Saida de dados---------- \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    printf("%5d ", matPtr[i][j]);
    }
    printf("\n");
}
}
