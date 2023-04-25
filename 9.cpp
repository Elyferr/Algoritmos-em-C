//Declaração de biblioteca
#include <stdio.h>

//Escopo principal
int main(){
	//Declaração de variaveis 
	int num, i;
	
	//Lê um número do teclado
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	//Ciclo de repetição
	for(i==0;i<=10;i++){
		
		//Imprimir mensagem na tela enquanto a condição for verdadeira
		printf("%d x %d = %d\n", num, i, num*i);
	}

}
