//Declaração de variáveis
#include<stdio.h>

//Abertura do escopo principal
int main(){
	
	//Declaração de variáveis
	int x, y, z;
	
	//Lê dois números inteiros do teclado
	printf("Digite dois numeros inteiros: \n");
	scanf("%d %d", &x, &y);
	
	//Operação
	z=x+y;
	
	//Imprime resultado na tela
	printf("O resultado da soma dos dois numeros digitados eh: %d", z);
	
	//Retorna nenhum valor
	return 0;
}
