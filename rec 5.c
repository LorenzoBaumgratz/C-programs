#include <stdio.h>
//multiplicação n*x
int main(){
int n,x;
scanf("%d %d", &n, &x);
printf("%d \n", f(n,x));
return 0;
}
int f(int n, int x){
if(x==1)
return n;
else
return n+f(n,x-1) ;
}

