//Declara��o de biblioteca
#include <stdio.h>

//Abertura do escopo principal
int main(){
	
	//Declara��o de vari�veis reais
	float g, f;
	
	//L� n�mero do teclado
	printf("Digite a temperatura atual em graus celsius: ");
	scanf("%f", &g);
	
	//Opera��o
	f = g * 1.8 + 32;
	
	//Imprimir temperatura em Fahrenheit na tela
	printf("A temperatura em Fahrenheit eh: %0.f", f);
	
}
