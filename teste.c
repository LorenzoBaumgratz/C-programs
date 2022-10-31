#include <stdio.h>

int main(){
	//declaracao de valores
	int x=9;
	int y=11;
	
	//criacao de ponteiros
	int*xPtr;
	int*yPtr;
	
	//armazenando endereco
	xPtr = &x;
	yPtr = &y;
	
	printf("Endereco de x: %p \n", &x);
	printf("Endereco armazenado em xPtr: %p \n", xPtr);
	printf("Valor de x: %d \n", x);
	printf("Valor de xPtr: %d \n", *xPtr);
	
	printf("--------------------------------------------------------------------------------------------\n");
	
	printf("Endereco de y: %p \n", &y);
	printf("Endereco armazenado em yPtr: %p \n", yPtr);
	printf("Valor de y: %d \n", y);
	printf("Valor de yPtr: %d", *yPtr);
	
	return 0;
}
