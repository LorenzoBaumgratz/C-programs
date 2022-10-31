#include <stdio.h>

int main(){

int a; //aluno
int n; //nota
float med; //media da turma
int som=0; // soma das notas
int i=0;


for(a=1; a<=15; a++){

    printf("Digite a nota do aluno %d:  ", a);
scanf("%d", &n);

if(n<=10 && n>=0){
if(n>=6){

    som = som + n;

}else

i++;










printf("%d alunos foram reprovados, PRESS F \n", i);
med = som/(a-1);
printf("Media dos alunos aprovados= %.2f", med);
}



}
