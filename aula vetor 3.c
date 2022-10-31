#include <stdio.h>

int main(){

int v[3], c[3], i;
int som=0;
int mul;

for(i=0; i<3; i++){

printf("Digite o valor da posicao %d do vetor 1: ", i);
scanf("%d", &v[i]);


}

for(i=0; i<3; i++){

printf("Digite o valor da posicao %d do vetor 2: ", i);
scanf("%d", &c[i]);
}
for(i=0; i<3; i++){

mul= c[i]* v[i];
som= som + mul;

}
printf("Resultado: %d", som);
}

