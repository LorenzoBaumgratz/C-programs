#include <stdio.h>
#include <math.h>
int k=1;
int x;
void contador();
int main(){

    while(k!=0){
    scanf("%d", &k);
    contador();
    }
return 0;
}

void contador(){
static int x=5;

if(x==0)
x=5;
if(x>0)
x--;


printf("%d\n", x);
return;
}
