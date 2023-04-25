//Declaração de biblioteca
#include<stdio.h>

//Abertura de escopo principal
int main(){
	
	//Declaração de variável
	int x;
	
	//Lê um número do teclado
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	
	//Condição
	if(x%2==0){
		
		//Se a condição for verdadeira
		printf("O valor inserido eh par");
	}
	
	else{
		
		//Se a condição não for verdadeira
		printf("O valor inserido eh impar");
	}
}
