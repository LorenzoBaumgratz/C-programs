#include <stdio.h>
#include <stdlib.h>

int main(){

	int**matPtr;
	int*vPtr;

	int l,c,i,j;
	int x=0;

	printf("Linhas: \n");
	scanf("%d", &l);

	printf("Colunas: \n");
	scanf("%d", &c);

	matPtr= (int**) malloc(l*sizeof(int*));

	for(i=0;i<l;i++){
	matPtr[i]= (int*) malloc(c*sizeof(int));
		for(j=0;j<c;j++){
			printf("mat[%d][%d]= ", i,j);
			scanf("%d", &matPtr[i][j]);
		}
	}
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(matPtr[i][j]%2==0)
			x++;
		}
	}

	vPtr= (int*) malloc(x*sizeof(int));

	x=0;

	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(matPtr[i][j]%2==0){
			vPtr[x]=matPtr[i][j];
			x++;
			}
		}
	}

	for(i=0;i<x;i++)
	printf("v[%d]= %d \n", i,*(vPtr+i));
}
