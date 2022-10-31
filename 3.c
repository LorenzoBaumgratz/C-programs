#include <stdio.h>
//formula de recorrencia. ex:sequencia de fibonnati f(n)=f(n-1)+f(n-2)


int seq(int n){
int F1,F2,Fn,i;
F1=1;
F2=1;

if(n<=2)
    Fn=F1;
else{

for(i=3;i<=n;i++){
    Fn=F2+F1;
    F1=F2;
    F2=Fn;

}
}
return Fn;
}
int main(){
int fib,n;

printf("Digite a posicao N da sequencia do Homi: \n");
scanf("%d", &n);
fib=seq(n);
printf("O numero da posicao %d foi: %d \n", n,fib);
return 0;
}
