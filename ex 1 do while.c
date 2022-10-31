#include <stdio.h>
//calcule a media de 5 numeros fornecidos pelo usuario
int main(){
int n=1;
int som=0;
float med;
int x;
do{

  printf("Digite o %d numero: ", n);
scanf("%d", &x);
    n++;
   som= som + x;
    med= som/(n-1);
}while(n<=5);


printf("\n %.2f", med);

}
