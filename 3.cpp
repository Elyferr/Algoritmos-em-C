//Declara��o de biblioteca
#include<stdio.h>

//Abertura de escopo principal
int main(){
	
	//Declara��o de vari�vel
	int x;
	
	//L� um n�mero do teclado
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	
	//Condi��o
	if(x%2==0){
		
		//Se a condi��o for verdadeira
		printf("O valor inserido eh par");
	}
	
	else{
		
		//Se a condi��o n�o for verdadeira
		printf("O valor inserido eh impar");
	}
}
