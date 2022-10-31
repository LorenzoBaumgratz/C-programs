#include <stdio.h>

int main(){

int c;
float s,a; //salario e aumento
float A; //salario novo

printf("Digite o salario atual:\n");
scanf("%f", &s);

printf("Escolha o cargo do funcionairo:\n"
        "1- estagiario\n"
        "2- executivo\n"
        "3-diretor\n");

        scanf("%d", &c);

        switch (c){

    case 1:
        a = s*0.3;
        A = a + s;
        printf("\n Cargo 1 - estagiario");
        printf("\n Valor do aumento: %.2f", a);
        printf("\n Novo salario: %.2f", A);
        break;

    case 2:
        a = s*0.2;
        A = a + s;
        printf("\n Cargo 2 - executivo");
        printf("\n Valor do aumento: %.2f", a);
        printf("\n Novo salario: %.2f", A);
        break;

  case 3:
        a = s*0.1;
        A = a + s;
        printf("\n Cargo 3 - diretor");
        printf("\n Valor do aumento: %.2f", a);
        printf("\n Novo salario: %.2f", A);
        break;

  default:
    printf("Valor invalido");
	break;

        }

}
