#include <stdio.h>

///tipo_do_retorno nome_da_funcao(tipo variavel, tipo variavel,....);

//x^a+y^b+(x-y)^a+b


float potencia(float base, int expoente){

    int cont=0;
    float pot=1;

   while(cont<expoente){

    pot=pot*base;
    cont++;
   }
   return pot;
}
    int main(){
    float x,y, potx, poty,potxy,som;
    int a,b;

    printf("Digite 2 numeros reais:\n ");
    scanf("%f %f", &x, &y);
    printf("Digite 2 numeros inteiros nao negativos:\n ");
    scanf("%d %d", &a, &b);

    potx=potencia(x,a);
    poty=potencia(y,b);
    potxy=potencia(x-y,a+b);
    som= potx+poty+potxy;
    printf("Resultado= %.2f\n", som);
    return 0;
    }

