#include <stdio.h>
void inv(int k);
int main(){
int x;

scanf("%d", &x);
inv(x);
}
void inv(int k){
 if(k%10==k)
printf("%d", k);
 else{
 printf("%d", k%10);
 inv(k/10);
 }
}
