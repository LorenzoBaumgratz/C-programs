#include <stdio.h>
//nome, matricula, duas notas, faltas de um estudante; func media;veja se foi aprovado;lista p ver aprovados

typedef struct alunos{
	char nome[40];
	int matricula;
	float nota1,nota2;
	int falta;
	float media;
}aluno;

//float med(float x, float y);
//void printbook (struct aluno aluno[a], int n);

int main(){
	const int a=2;
	alunos aluno[a];
	int i,m;

		 for(i=0;i<a;i++){

 				printf("Nome do aluno: \n");
		 		fgets(aluno[i].nome,40,stdin);
			 	printf("Matricula: \n");
			 	scanf("%d",&aluno[i].matricula);
			 	printf("Notas: \n");
			 	scanf("%f %f",&aluno[i].nota1,&aluno[i].nota2);
			 //	m=med(aluno[i].nota1,aluno[i].nota2);
			 	printf("Faltas: \n");
			 	scanf("%d", aluno[i].falta);

			 	fflush(stdin);

			 }
		for(i=0;i<a;i++){
 			//printbook(aluno[a], i);

 			printf("Nome: %s\n", aluno[i].nome);
			printf("Matricula: %d\n",aluno[i].matricula);
			printf("Nota 1: %.2f  Nota 2:%.2f\n", aluno[i].nota1,aluno[i].nota2);
			printf("Faltas: %d", aluno[i].falta);
		//	printf("Media: %.2f\n", aluno[i].media);
			 }

	return 0;
}

/* aluno med(aluno aluno[i], aluno aluno[i]){

	int i;
	float media;

	media=(aluno[i].nota1+aluno[i].nota2)/2;

	return med;
}*/
/*void printbook (struct aluno aluno[a], int n){

			printf("Nome: %s\n", aluno[i].nome);
			printf("Matricula: %d\n",aluno[i].matricula);
			printf("Nota 1: %.2f  Nota 2:%.2f\n", aluno[i].nota1,aluno[i].nota2);
			printf("Faltas: %d", aluno[i].falta);

			return;
		}*/
