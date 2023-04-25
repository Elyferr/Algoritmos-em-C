//Declaração de bibliotecas
#include <stdio.h>
#include <locale.h>

//Escopo principal
int main (){
	
	//Habilitar caracteres do português brasileiro
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	//Declaração de variaveis string e inteiras
	char n[20];
	int i;
	
	//Lê strings e número do teclado
	printf("Digite seu nome e idade: \n");
	scanf("%s %d", &n, &i);
	
	//Imprimir frase na tela
	printf("Olá %s, é um prazer te conhecer!", n);
		
}
