#include <stdio.h>
int square(int num);
void printl();

int main(){

int i;

printf("O programa retorna n*n, [0...10]");

for(i=0; i<=10;i++){
printf("\n%d elevado ao quadrado = %d", i, square(i));
printl();
}
return 0;
}

int square (int num){
return (num*num);
}

void printl(){
printf("\n----------------------\n\n");
return;
}

