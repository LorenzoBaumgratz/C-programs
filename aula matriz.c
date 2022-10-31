#include <stdio.h>

int main (){

const int lin = 2, col = 2;
int i,j;
int m[lin][col];

for (i=0; i<lin; i++){
    for(j=0; j<col; j++){
        printf("Digite o termo do elemento [%d][%d] da matriz: ", i,j);
       scanf("%d", &m[i][j]);
    }
}

for (i=0; i<lin; i++){
    for(j=0; j<col; j++){

    printf("%d  ", m[i][j]);
    }
    printf("\n");

    }

}



