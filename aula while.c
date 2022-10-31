#include <stdio.h>

int main (){

int i=1;

while (i<=1000){

    printf("%d ", i);
 i=2*i;

if (i>1000){

    printf("\nPrimeiro numero maior que 1000: %d", i);
    break;
}


}



}
