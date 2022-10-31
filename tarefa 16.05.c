#include <stdio.h>

//Dados três números inteiros positivos, verifique se eles formam os lados de um triângulo. 
//(um lado deve ser menor que a soma dos outros 2 para obter um triangulo)

int x,y,z; //lados do possivel triangulo

int main(){
	
	printf("Digite o primeiro lado do triangulo: \n");
	scanf("%d", &x);
	
	printf("Digite o segundo lado do triangulo: \n");
	scanf("%d", &y);
	
	printf("Digite o terceiro lado do triangulo: \n");
	scanf("%d", &z);
	
	
	if( x<(y+z) && y<(x+z) && z<(x+y) ){
		
		printf("Os valores formam um triangulo \n");
		
	}else
	printf("Os valores nao formam um triangulo");
	
	
}
