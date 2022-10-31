#include <stdio.h>
#include <time.h>

int main(){
int som=0;
int i,j,n,med;
int v[10]={1,2,3,4,5,6,7,8,9,10}, m[10]={0,0,0,0,0,0,0,0,0,0};
srand(time(NULL));
for(i=0; i<100; i++){
n=1+rand()%10;
som+=n;
for(j=0;j<10;j++){
if(n==v[j])
m[j]++;
}
}
med=som/100;
printf("media :%d\n", med);
for(i=0; i<10;i++)
printf("%d: %d\n", i+1,m[i]);
}
