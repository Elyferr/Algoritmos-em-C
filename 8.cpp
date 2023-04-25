//Declaração de biblioteca
#include <stdio.h>

//Abertura do escopo principal
int main(){
	
	//Declaração de variáveis reais
	float g, f;
	
	//Lê número do teclado
	printf("Digite a temperatura atual em graus celsius: ");
	scanf("%f", &g);
	
	//Operação
	f = g * 1.8 + 32;
	
	//Imprimir temperatura em Fahrenheit na tela
	printf("A temperatura em Fahrenheit eh: %0.f", f);
	
}
