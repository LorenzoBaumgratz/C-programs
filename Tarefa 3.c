#include <stdio.h>
/* escreva uma função void que calcule os valores máx e mín de um vetor */
int main(){
    const int a=3;
    int v[a],i;
    int*vPtr;

    for(i=0;i<a;i++){
    printf("v[%d]= ", i);
    scanf("%d",&v[i]);
    }
    vPtr=&v;
    receba(&v, a);
    //receba(vPtr, a);
}
void receba(int*vPtr,int a){
int maior,menor;
int i;
menor=*vPtr;
maior=*vPtr;

for(i=0;i<a;i++){


if(*(vPtr+i)>maior)
maior=*(vPtr+i);

if(*(vPtr+i)<menor)
menor=*(vPtr+i);

}
printf("Maior: %d \n", maior);
printf("Menor: %d \n", menor);
return;
}
