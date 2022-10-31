#include <stdio.h>
#include <math.h>


int main(){
	
	int a,b,c,n;
	
	printf("Digite:\n"
			"1 para adicao\n"
			"2 para subtracao\n" 
			"3 para divisao\n"
			"4 para multiplicacao\n"
			"5 para potencia\n");
	scanf("%d", &n);
	
	switch(n){
	
	case 1:
		printf("Digite os 2 numeros da adicao: \n");
		scanf("%d %d", &a, &b);
		
		break;
		
	case 2:
		printf("Digite os 2 numeros da subtracao: \n");
		scanf("%d %d", &a, &b);
		
		break;
		
	case 3:
		printf("Digite os 2 numeros da divisao: \n");
		scanf("%d %d", &a, &b);
		
		break;
		
	case 4:
		printf("Digite os 2 numeros da multiplicacao: \n");
		scanf("%d %d", &a, &b);
		
		break;
		
	case 5:
		printf("Digite os 2 numeros da potencia: \n");
		scanf("%d %d", &a, &b);
		c=pow(a,b);
		//printf("Resultado: %d", pow(a,b));
		printf("Resultado: %d", c);
		break;
		
	default: 
	printf("Comando invalido");
	break;
}
}
