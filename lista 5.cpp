#include <stdio.h>
#include <math.h>
void reverse(int n);
int main(){
int n;
scanf("%d", &n);
reverse(n);
}

void reverse(int n){
	int k;
	int x=0;
	int y=0;

	while(n>0){
		k=n%10;
		n=n/10;
y=y*10+k;

	}
printf("%d", y);
	return;
}
