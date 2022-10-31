#include <stdio.h>

typedef struct tempo{
int minutos;
int horas;

}tempo;

int main(){
tempo x;

scanf("%d", &x.horas);
scanf("%d", &x.minutos);

printf("%d",tem(x.horas,x.minutos));
}
int tem(int hor, int min){
int temp;

temp= min+hor*60;
return temp;
}
