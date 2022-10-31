#include <stdio.h>

int main(){

int const l=3, c=3;
float a[l][c],b[l][c],C[l][c];
float med;
int som=0,x=0,i,j,k;

for(i=0; i<l; i++){
    for(j=0; j<c; j++){
        printf("Digite o valor do elemento [%d][%d]: ", i,j);
        scanf("%f", &a[i][j]);
        som=som+a[i][j];
        x++;
        }
        }

med= som/x;

for(i=0; i<l; i++){
    for(j=0; j<c; j++){
        printf("%.2f ", a[i][j]);
        }
        printf("\n");
        }
    printf("\n");
    
 for(i=0; i<l; i++){
    for(j=0; j<c; j++){
        if(a[i][j]>med){
        b[i][j]=a[i][j];
        }else
        b[i][j]=0;
        }
        }

    for(i=0; i<l; i++){
        for(j=0;j<c; j++){
            printf("%.2f ", b[i][j]);
 }
            printf("\n");
 }
 printf("\n");

 for(i=0; i<l; i++){
        for(j=0;j<c;j++){
            C[j][i]=a[i][j];}}

    for(i=0; i<l; i++){
        for(j=0;j<c;j++){
            printf("%.2f ", C[i][j]);
        }
        printf("\n");

        }
        }



