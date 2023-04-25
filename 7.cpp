//Declaração de biblioteca
#include <stdio.h>

//Abertura do escopo principal
int main(){
	
	//Declaração de variável inteira
	int idade;
	
	//Lê número inteiro do teclado
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	//Verificar se a idade é maior ou igual a 18
	if(idade>=18){
		
		//Se for maior de idade imprimir essa frase
		printf("Voce eh maior de idade");
	}
	else{
		//Se for de menor imprimir essa frase
		printf("Voce eh menor de idade");
	}

}
