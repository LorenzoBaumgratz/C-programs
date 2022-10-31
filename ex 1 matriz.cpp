#include <stdio.h>
//Ache o maior elemento da matriz

int main(){

	int const l=2, c=2;
	int i,j,maior,y,z;
	int m[l][c];
	int x=0;

	printf("Esse programa esta considerando uma matriz [%d][%d]\n\n", l,c);
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){

			printf("Digite o valor do elemento [%d][%d]: ", i,j);
			scanf("%d", &m[i][j]);
			while(x==0){
				x++;
				maior=m[i][j];
			}
			if(m[i][j]> maior){
			maior= m[i][j];
			y=i;
			z=j;
			}
		}
	}
	printf("Maior elemento: %d . Posicao [%d][%d]", maior, y,z);
}
