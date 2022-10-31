#include <stdio.h>

int byValue(int a); //passagem de argumento por valor
void byPtr(int*ptr); //passagem de argumento por referencia
int main(){

int num;
int x=-5, y=-5;

printf("\n Passagem de argumento por byValue");
printf("\n x= %d", x);
printf("\n Chamada de funcao num = byValue(x)");
num=byValue(x);
printf("\n num = %d", num);
printf("\n x=%d", x);

printf("\n\n\n Passagem de argumento por byPtr");
printf("\n y=%d", y);
printf("\n Chamada de funcao byPtr(&y)");
byPtr(&y);
printf("\n y=%d \n", y);

return 0;

}

int byValue(int a){
if(a<0)
return a*-1;
else
return a;
}

void byPtr(int*ptr){
 if (*ptr<0)
 *ptr=*ptr * -1;

}
