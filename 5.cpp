//Declara��o de biblioteca
#include<stdio.h>

//Abertura do escopo principal
int main(){
	//Declara��o de vari�veis
	int n, ant, suc;
	
	//L� um n�mero do teclado
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	//Opera��es
	ant = n - 1;
	suc = n + 1;
	
	//Imprime o n�mero digitado, o antecessor e o sucessor
	printf("\n");
	printf("%d (antecessor) \n", ant);
	printf("%d (valor) \n", n);
	printf("%d (sucessor) \n", suc);

}
