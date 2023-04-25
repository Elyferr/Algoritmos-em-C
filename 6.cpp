//Declaração de bibliotecas
#include <stdio.h>
#include <math.h>

//Abertura do escopo principal
int main() {
	
	//Declaração de variaveis
    double num;
    int pti;

    // Lê um número real do teclado
    printf("Digite um numero real: ");
    scanf("%lf", &num);

    //Calcula a parte inteira do número usando a função floor()
    pti = floor(num);

    //Imprime a parte inteira do número
    printf("A parte inteira do numero eh: %d\n", pti);

}
	
	

