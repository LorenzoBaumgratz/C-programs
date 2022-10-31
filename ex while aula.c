#include <stdio.h>

int main(){

int n,N, e;
float m;
int total;

total = 0;
 e=1;

while(e<=10){


    printf("Nota do estudante %d:", e);
    scanf("%d", &n);

    e++;
    total = total + n;
}

m= total/(e-1);
printf("Media :%.2f", m);
}
