//Declara��o de bibliotecas
#include <stdio.h>
#include <locale.h>

//Escopo principal
int main (){
	
	//Habilitar caracteres do portugu�s brasileiro
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	//Declara��o de variaveis string e inteiras
	char n[20];
	int i;
	
	//L� strings e n�mero do teclado
	printf("Digite seu nome e idade: \n");
	scanf("%s %d", &n, &i);
	
	//Imprimir frase na tela
	printf("Ol� %s, � um prazer te conhecer!", n);
		
}
