#include <stdio.h>
#include <stdlib.h>

int main(){
	int**matPtr;
	int**matbPtr;
	int l,c,i,j;
	
	printf("linhas: \n ");
	scanf("%d", &l);
	
	printf("colunas: \n");
	scanf("%d", &c);
	
	matPtr= (int**) malloc(l*sizeof(int*));
	
	for(i=0;i<l;i++){
	matPtr[i]= malloc(c*sizeof(int));
		for(j=0;j<c;j++){
			printf("mat[%d][%d] = ", i,j);
			scanf("%d", &matPtr[i][j]);	
		}
}
	matbPtr= (int**) malloc(c*sizeof(int*));
	
	for(i=0;i<c;i++){
	matbPtr[i]= malloc(l*sizeof(int));
		for(j=0;j<l;j++){
			matbPtr[i][j]=matPtr[j][i];	
		}
}
	printf("\n Saida: \n");
	for(i=0;i<c;i++){
		for(j=0;j<l;j++){
			printf("matb[%d][%d]= %5d \n",i,j, matbPtr[i][j]);	
		}
		printf("\n");
}
	return 0;
}
