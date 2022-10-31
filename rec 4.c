#include <stdio.h>
//recebe A e N, sai A^N
float pot(float a,int n);
int main(){
int n;
float a;
scanf("%f %d", &a,&n);
printf("%.2f \n", pot(a,n));
return 0;
}
float pot (float a, int n){
if(n==1)
return a;
else
return a*pot(a,n-1);
}
