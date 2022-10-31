#include <stdio.h>
#include <stdlib.h>

int main(){
int v[15],i,x=0,k,y=0;
int*vPtr;
int*cPtr;

printf("Valor de k: ");
scanf("%d", &k);

for(i=0;i<15;i++){
scanf("%d",&v[i]);
if(v[i]<0){
printf("valor invalido, tente novamente \n");
scanf("%d",&v[i]);
}
}
for(i=0;i<15;i++){
if(v[i]%2!=0)
x++;
}
vPtr= (int*) malloc(x*sizeof(int));
x=0;
for(i=0;i<15;i++){
if(v[i]%2!=0){
*(vPtr+x)=v[i];
x++;
}
}
printf("Saida B: \n");
for(i=0;i<x;i++)
printf("v[%d] = %d \n", i, *(vPtr+i));

for(i=0;i<x;i++){
if(*(vPtr+i)>k)
y++;
}
cPtr= (int*) malloc(y*sizeof(int));
y=0;

for(i=0;i<x;i++){
if(*(vPtr+i)>k){
*(cPtr+y)=*(vPtr+i);
y++;
}
}
printf("y: %d \n", y);
if(y==0){
printf("B nao tem elemto maior que %d", k);
}else{
printf("Saida C: \n");

for(i=0;i<y;i++){
printf("v[%d]= %d \n", i, *(cPtr+i));
}
}
}
