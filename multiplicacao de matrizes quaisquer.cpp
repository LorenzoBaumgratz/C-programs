#include <stdio.h>
//A[l][c]; B[L][C];
int main(){
	const int l=4, c=2, L=2, C=3;
	int A[l][c], B[L][C], mul[l][C];
	int i,j,x,aux;
	
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			printf("Digite o valor do elemento [%d][%d] da matriz A: ", i,j);
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			printf("Digite o valor do elemento [%d][%d] da matriz B: ", i,j);
			scanf("%d", &B[i][j]);
		}
	}
	
	printf("\nElementos da matriz A: \n");
	for(i=0; i<l; i++){
		printf("\n");
		for(j=0; j<c; j++){
			printf("%d	", A[i][j]);	
		}
	}
	
	printf("\nElementos da matriz B: \n");
	for(i=0; i<L; i++){
		printf("\n");
		for(j=0; j<C; j++){
			printf("%d	", B[i][j]);	
		}
	}
	
	for(i = 0; i < l; i++) {
		for(j = 0; j < C; j++) {
			
			mul[i][j] = 0;
			for(x = 0; x < c; x++) {
				aux = aux+ A[i][x] * B[x][j];
			}

			mul[i][j] = aux;
			aux = 0;
		}
	}
	
	printf("\nMatriz C:\n	");
	
	for(i=0; i<l; i++){
		printf("\n");
		for(j=0; j<C; j++){
			printf("%d	", mul[i][j]);	
		}
	}
}


