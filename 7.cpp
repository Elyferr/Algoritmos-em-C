//Declara��o de biblioteca
#include <stdio.h>

//Abertura do escopo principal
int main(){
	
	//Declara��o de vari�vel inteira
	int idade;
	
	//L� n�mero inteiro do teclado
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	//Verificar se a idade � maior ou igual a 18
	if(idade>=18){
		
		//Se for maior de idade imprimir essa frase
		printf("Voce eh maior de idade");
	}
	else{
		//Se for de menor imprimir essa frase
		printf("Voce eh menor de idade");
	}

}
