//Declara��o de vari�veis
#include<stdio.h>

//Abertura do escopo principal
int main(){
	
	//Declara��o de vari�veis
	int x, y, z;
	
	//L� dois n�meros inteiros do teclado
	printf("Digite dois numeros inteiros: \n");
	scanf("%d %d", &x, &y);
	
	//Opera��o
	z=x+y;
	
	//Imprime resultado na tela
	printf("O resultado da soma dos dois numeros digitados eh: %d", z);
	
	//Retorna nenhum valor
	return 0;
}
