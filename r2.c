#include <stdio.h>
#include <math.h>
/*crie um registro que armazene um ponto do plano cartesiano e escreva uma funcao que calcule a
distancia entre dois pontos */
typedef struct ponto{
float x,y;
}ponto;

int main(){
 ponto l,k;
 float dist;
    scanf("%f %f", &k.x, &k.y);
    scanf("%f %f", &l.x, &l.y);

    dist= sqrt(pow(l.x-k.x, 2)+ pow(l.y-k.y,2));
    printf("resultado = %f", dist);

    return 0;
}

