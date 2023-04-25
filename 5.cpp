//Declaração de biblioteca
#include<stdio.h>

//Abertura do escopo principal
int main(){
	//Declaração de variáveis
	int n, ant, suc;
	
	//Lê um número do teclado
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	//Operações
	ant = n - 1;
	suc = n + 1;
	
	//Imprime o número digitado, o antecessor e o sucessor
	printf("\n");
	printf("%d (antecessor) \n", ant);
	printf("%d (valor) \n", n);
	printf("%d (sucessor) \n", suc);

}
