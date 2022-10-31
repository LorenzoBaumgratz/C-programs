#include <stdio.h>
    /*o registro é uma colecao de variaveis, possivelmente de tipos diferentes
    Os registros sao conhecidos como structs
    use o operador . para atribuir valores dos campos */
    typedef struct racional {
    int p,q;
    }racional;

    int mdc(int x, int y);
    racional soma(racional x, racional y);
    racional multiplica(racional x, racional y);
    racional divide(racional x, racional y);

int main(){
    racional x,y,z,w,t;
    scanf("%d %d %d %d", &x.p,&x.q,&y.p,&y.q);
    z=soma(x,y);
    w=multiplica(x,y);
    t=divide(x,y);

    printf("Soma= %d/%d \n", z.p,z.q);
    printf("Multiplicacao= %d/%d \n", w.p,w.q);
    printf("Divisao= %d/%d \n", t.p,t.q);

    return 0;
}
int mdc(int x, int y){
int r=1;

while(r!=0){
r=x%y;
x=y;
y=r;
}
return x;
}

racional multiplica(racional x, racional y){
    racional k;

    k.p=(x.p*y.p);
    k.q=(x.q*y.q);

    k.p=(x.p*y.p)/mdc(k.p,k.q);
    k.q=(x.q*y.q)/mdc(k.p,k.q);

    return k;
}
racional divide(racional x, racional y){
    racional k;

    k.p=(x.p*y.q);
    k.q=(x.q*y.p);

    k.p=(x.p*y.q)/mdc(k.p,k.q);
    k.q=(x.q*y.p)/mdc(k.p,k.q);

    return k;
}
racional soma(racional x, racional y){
    racional k;

    k.p=(x.p*y.q+y.p*x.q);
    k.q=(x.q*y.q);

    k.p=(x.p*y.q+y.p*x.q)/mdc(k.p,k.q);
    k.q=(x.q*y.q)/mdc(k.p,k.q);

    return k;
}

