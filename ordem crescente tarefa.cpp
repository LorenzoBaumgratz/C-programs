#include <stdio.h>
//obs geral: pq n posso fazer a=x ao inves de x=a?
int main(){
	
	//base da função
	
	int a,b,c,x,y,z;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &a);
	
	printf("Digite o segundo numero:\n");
	scanf("%d", &b);
	
	printf("Digite o terceiro numero:\n");
	scanf("%d", &c);
	
	//combinações
	
	if (a>b && b>c){ //a>b>c
	x=a; 
	y=b;
	z=c;
	

}
	
	if (a>c && c>b){ //a>c>b
	x=a;
	y=c;
	z=b;

}
	
	
	if (b>a && a>c) {//b>a>c
	x=b;
	y=a;
	z=c;
	
}
	if (b>c && c>a){ //b>c>a
	x=b;
    y=c;
	z=a;
	
}
	if (c>b && b>a) {//c>b>a
	x=c;
	y=b;
	z=a;
	
}
	if (c>a && a>b){ //c>a>b
	x=c;
	y=a;
	z=b;
	
}
	
	//saida
	
	printf("\n\nOrdem crescente: %d,%d,%d",x,y,z);
	
	
	
}
