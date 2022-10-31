#include <stdio.h>
#include <stdlib.h>
void maximo(int**v,int*max,int linha,int coluna,int*lin,int*col);
int main(){

int**matPtr;
int i,j,l,c;
int max,lin,col;


    printf("Linha: \n");
    scanf("%d",&l);

    printf("Coluna: \n");
    scanf("%d",&c);

    matPtr= (int**) malloc(l*sizeof(int*));

    for(i=0;i<l;i++){
        matPtr[i]= (int*) malloc(c*sizeof(int));
            for(j=0;j<c;j++){
            printf("mat[%d][%d]= ",i,j);
            scanf("%d", &matPtr[i][j]);
            }
    }
    maximo(matPtr,&max,l,c,&lin,&col);
    printf("maior elemento: %d. Linha: %d. Coluna: %d ", max,lin,col);
}
void maximo(int**v,int*max,int linha,int coluna,int*lin,int*col){
int i,j;
*max=v[0][0];


 for(i=0;i<linha;i++){
            for(j=0;j<coluna;j++){
            if(v[i][j]>*max){
            *max=v[i][j];
            *lin=i;
            *col=j;
            }
            }
    }
}
