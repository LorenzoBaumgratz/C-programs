#include <stdio.h>
//representar numero complexo; soma e produto

typedef struct complexo{
	int a,b;
}complexo;

complexo som(complexo x, complexo y);
complexo mul(complexo x, complexo y);

int main(){
	complexo x,y,s,m;

	
	printf("Digite o numero complexo (a)+(b)i: \n");
	scanf("%d %d", &x.a, &x.b);
	printf("Digite o numero complexo (a)+(b)i: \n");
	scanf("%d %d", &y.a, &y.b);
	
	s=som(x,y);
	m=mul(x,y);
	
	printf("%d %d %d %d \n",m.a,m.b,s.a,s.b);
	printf("Soma = %d + %d i\n",s.a,s.b);
	printf("Produto = %d + %d i\n",m.a,m.b);
	
	return 0;
}

complexo mul(complexo x, complexo y){
	complexo k;
	
	k.a=(x.a*y.a)-(x.b*y.b);
	k.b=(x.a*y.b)+(x.b*y.a);
	
	return k;
}

complexo som(complexo x, complexo y){
	complexo k;
	
	k.a=x.a+y.a;
	k.b=x.b+y.b;
	
	return k;
}
