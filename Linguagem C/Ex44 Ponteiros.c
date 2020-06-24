#include <stdio.h>
#include <string.h>

/* Escreva uma fun��o calcula que:
a. receba como par�metros duas vari�veis inteiras, X e Y;
b. retorne em X a soma de X e Y;
c. retorne em Y a subtra��o de X e Y.
Pergunta: a passagem dos par�metros para a fun��o deve ser por valor ou por refer�ncia?
R: Por refer�ncia 
 */

void calcula(int *x, int *y){
	int temporario = *x;
	
	*x += *y;
	*y = temporario - *y;
};

int main(int argc, char *argv[]) {
	int x=5, y=3;
	
	int *p1 = &x;
	int *p2 = &y;
	
	calcula(p1, p2);
	printf("x depois da funcao = %d", x);
	printf("\ny depois da funcao = %d", y);
	
	
	return 0;
}
