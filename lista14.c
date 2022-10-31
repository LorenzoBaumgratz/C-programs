#include <stdio.h>
#include <stdlib.h>

int main(){
	int l,c,i,j,max,lin,col;
	int**matPtr;
	
	printf("Linhas: \n");
	scanf("%d",&l);
	
	printf("Colunas: \n");
	scanf("%d",&c);
	
	matPtr= (int**) malloc(l*sizeof(int*));
	for(i=0;i<l;i++){
		matPtr[i]= (int*) malloc(c*sizeof(int));
		for(j=0;j<c;j++){
			printf("mat[%d][%d]= ",i,j);
			scanf("%d", &matPtr[i][j]);
		}
	}
	
	max=matPtr[0][0];
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(matPtr[i][j]>max){
			max=matPtr[i][j];
			lin=i;
			col=j;	
			}
		}
	}
	printf("Maior: %d  [%d][%d]", max,lin,col);
	
	free(matPtr);
	return 0;
}
