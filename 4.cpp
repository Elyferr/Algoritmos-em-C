//Declara��o de biblioteca
#include <stdio.h>

//Escopo principal
int main(){
	
	//Declara��o de vari�veis
	float x, y, z, m ,s;
	
	//L� numeros do teclado
	printf("Digite tres numeros: ");
	scanf("%f %f %f", &x, &y, &z);
	
	//Opera��o
	s=x+y+z;
	m=s/3;
	
	//Imprime resultado na tela
	printf("A media dos tres numeros eh: %.0f", m);
	
	//Retorna nenhum valor
	return 0;
}
