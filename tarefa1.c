#include <stdio.h>

float getAverage(int*arr, int size);

int main(){

	int v[5]={20,30,10,20,20};
	float avg;

	avg=getAverage(v,5);

	printf("Average value is: %.2f\n", avg);

	return 0;
}

float getAverage(int*arr, int size){

	int i,som=0;
	float avg;

	for(i=0;i<size;i++)
	som+=*(arr+i);

	avg= som/size;

	return avg;
}

