#include <stdio.h>
//escreva uma funcao que calcule o maximo entre 2 numeros inteiros

int maximo(int a, int b){
int max;
if(a>b)
max=a;
else
max=b;
return max;
}

int main(){
int a,b,c;
printf("Digite 2 numeros inteiros: \n");
scanf("%d %d", &a, &b);
c=maximo(a,b);
printf("O maximo entre %d e %d foi %d\n", a,b,c);
return 0;
}
