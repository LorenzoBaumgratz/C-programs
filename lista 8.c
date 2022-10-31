#include <stdio.h>
#include <locale.h>
#include <time.h>
int c,n,x,y;
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	printf("Selecione o nivel de dificuldade:\n"
			"1-Facil\n"
			"2-Medio\n"
			"3-Dificil\n");

	scanf("%d", &c);

	switch(c){
		case 1:
			n=1+rand()%10; //intervalo
			x=5; //tentativas
			while(x>0){
			printf("Acerte o número de 1 a 10. %d tentativas restantes\n", x);
			scanf("%d", &y);
			x--;
			if(y==n){
				printf("ACERTOU!!!");
				break;
			}
			//dicas:
			if(y>n)
			printf("Dica: ele é menor\n");
			if(y<n)
			printf("Dica: ele é maior\n");
			}
			printf("O número era: %d", n);
			break;
		case 2:
			n=1+rand()%100; //intervalo
			x=5; //tentativas
			while(x>0){
			printf("Acerte o número de 1 a 100. %d tentativas restantes\n", x);
			scanf("%d", &y);
			x--;
			if(y==n){
				printf("ACERTOU!!!");
				break;
			}
			//dicas:
			if(y>n)
			printf("Dica: ele é menor\n");
			if(y<n)
			printf("Dica: ele é maior\n");
			}
			printf("O número era: %d", n);
			break;
		case 3:
			n=1+rand()%100; //intervalo
			x=3; //tentativas
			while(x>0){
			printf("Acerte o número de 1 a 100. %d tentativas restantes\n", x);
			scanf("%d", &y);
			x--;
			if(y==n){
				printf("ACERTOU!!!");
				break;
			}
			//dicas:
			if(y>n)
			printf("Dica: ele é menor\n");
			if(y<n)
			printf("Dica: ele é maior\n");
			}
			printf("O número era: %d", n);
			break;
		default:
			printf("Dificuldade inválida");
			break;
	}
	return 0;
}
