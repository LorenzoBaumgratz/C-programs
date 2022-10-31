#include <stdio.h>

const int a=10;
int main(){

int v[]= {10,100,200,-3,1,0,45,67,8,23};
int i, *ptr[a];

for(i=0; i<a;i++)
ptr[i]=&v[i];

for(i=0;i<a;i++)
printf("Valor de v[%d] = %d\n", i, *ptr[i]);

return 0;
}
