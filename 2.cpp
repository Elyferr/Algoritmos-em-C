//Declara��o de biblioteca 
#include<stdio.h>

//Abertura do escopo principal
int main(){
	
	//Declara��o de vari�veis
	float r, pi, a, rr;
	
	//l� numero do teclado
	printf("Digite o valor do raio do circulo: ");
	scanf("%f", &r);
	
	//Opera��es e atribui��es
	pi=3,14;
	rr=r*r;
	a=pi*rr;
	
	//imprimir resultado na tela
	printf("O resultado da area do circulo eh: %0.2f", a);
	
	//Retorna nenhum valor
	return 0;
}
