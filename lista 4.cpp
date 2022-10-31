#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void inCircle (float x_c, float y_c, float x_p, float y_p, float R);
int main(){
	float x_p,y_p,x_c,y_c,R;


	printf("Digite a coordenada X e Y do ponto: \n");
	scanf("%f %f", &x_p, &y_p);
	printf("Digite a coordenada X e Y do centro: \n");
	scanf("%f %f", &x_c, &y_c);
	printf("Digite o tamanho do raio da circunferencia: \n");
	scanf("%f", &R);

	inCircle (x_c, y_c, x_p, y_p, R);

	return 0;
}

void inCircle (float x_c, float y_c, float x_p, float y_p, float R){
	int k;
	if(pow((x_p - x_c),2) + pow((y_p - y_c),2) <= pow(R,2))
	printf("verdadeiro");
	else
	printf("falso");

	return;

}

