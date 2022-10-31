#include <stdio.h>
#include <stdlib.h>


int main(){
int l,c,i,j,k=0,som=0,med=1;
int**matPtr;
int*bPtr;
int*cPtr;
int*sPtr;


printf("Linhas: ");
scanf("%d", &l);
printf("Colunas: ");
scanf("%d", &c);

matPtr= (int**) malloc(l*sizeof(int*));
for(i=0;i<l;i++){
matPtr[i]= (int*) malloc(c*sizeof(int));
    for(j=0;j<c;j++){
    printf("v[%d][%d]= ", i,j);
    scanf("%d", &matPtr[i][j]);
    }
}
printf("Matriz: \n");

for(i=0;i<l;i++){
    for(j=0;j<c;j++){
    printf("%5d", matPtr[i][j]);
    }
    printf("\n");
}
printf("Saida B: \n");

for(i=0;i<l;i++){
    for(j=0;j<c;j++){
    if(i==j)
    k++;
    }
}
bPtr= (int*) malloc(k*sizeof(int));
k=0;

for(i=0;i<l;i++){
    for(j=0;j<c;j++){
        if(i==j){
        *(bPtr+k)=matPtr[i][j];
        k++;
        }
    }
}
for(i=0;i<k;i++)
printf("v[%d]= %d \n", i, *(bPtr+i));

sPtr= (int*) malloc(j*sizeof(int));
for(i=0;i<l;i++){
    for(j=0;j<c;j++){
    som+=matPtr[i][j];
    *(sPtr+i)=som;
    }
}
int maior,m;
maior=*(sPtr);
for(i=0;i<j;i++){
 if(*(sPtr+i)>maior){
  maior=*(sPtr+i);
  m=i;
}
}
cPtr= (int*) malloc (j*sizeof(int));
for(j=0;j<c;j++){
*(cPtr+j)=matPtr[m][j];
}
printf("Saida C: \n");
for(j=0;j<c;j++)
printf("v[%d]= %d \n", j, *(cPtr+j));
}
