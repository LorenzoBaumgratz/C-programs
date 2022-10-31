#include <stdio.h>
//Dado um número inteiro n>0. Determine n!
int main(){

int n;
int fat;
fat=1;

printf("Determine n, para obter n!:\n");
scanf("%d", &n);


while (n!=1){

fat= fat*n;
n=n-1;




	
}
printf("%d ", fat);
}
