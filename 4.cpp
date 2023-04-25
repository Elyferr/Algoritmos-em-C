//Declaração de biblioteca
#include <stdio.h>

//Escopo principal
int main(){
	
	//Declaração de variáveis
	float x, y, z, m ,s;
	
	//Lê numeros do teclado
	printf("Digite tres numeros: ");
	scanf("%f %f %f", &x, &y, &z);
	
	//Operação
	s=x+y+z;
	m=s/3;
	
	//Imprime resultado na tela
	printf("A media dos tres numeros eh: %.0f", m);
	
	//Retorna nenhum valor
	return 0;
}
