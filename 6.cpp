//Declara��o de bibliotecas
#include <stdio.h>
#include <math.h>

//Abertura do escopo principal
int main() {
	
	//Declara��o de variaveis
    double num;
    int pti;

    // L� um n�mero real do teclado
    printf("Digite um numero real: ");
    scanf("%lf", &num);

    //Calcula a parte inteira do n�mero usando a fun��o floor()
    pti = floor(num);

    //Imprime a parte inteira do n�mero
    printf("A parte inteira do numero eh: %d\n", pti);

}
	
	

