#include <stdio.h>

int main(){

int n;
int pot = 1;
int c=1;

printf("Digite a base da potencia:\n");
scanf("%d", &n);

do{

    pot= pot*n;
    printf("%d ", pot);
    c++;

}while(c<=10);



}
