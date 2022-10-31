#include <stdio.h>
//recursiva para fatorial
int fat (int n);
int main(){
int n;
scanf("%d", &n);
printf("%d \n", fat(n));
return 0;
}
int fat (int n){
if(n==1)
return 1;
else
return n*fat(n-1);
}
