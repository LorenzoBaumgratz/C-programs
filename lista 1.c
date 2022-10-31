#include <stdio.h>
float minv(float*v, int n);
int main(){
	
	float*aPtr;
	float*bPtr;
	float a[3];
	float b[5];
	float minA,minB;
	int i;
	
	for(i=0;i<3;i++){
		printf("[%d]= ",i);
		scanf("%f", &a[i]);
		
	}
	
	for(i=0;i<5;i++){
		printf("[%d]= ",i);
		scanf("%f", &b[i]);
	}
	aPtr=a;
	bPtr=b;
	minA=minv(aPtr,3);
	minB=minv(bPtr,5);
	
	printf("%.2f \n", minA);
	printf("%.2f \n", minB);
	
}
float minv(float*v, int n){
	int i;
	float menor;
	menor=*v;
	for(i=0;i<n;i++){
		if(*(v+i)<menor){
			menor=*(v+i);
		}
	}
	return menor;
}

