#include <stdio.h>
int main(){
int n;
scanf("%d", &n);
printf("%d \n", f(n));
return 0;
}
int f(int n){
if(n==1 || n==2)
return n;
else
return f(n-1)+n*f(n-2);
}
