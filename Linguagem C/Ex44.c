#include <stdio.h>
#include <string.h>

/* Escreva uma função calcula que:
a. receba como parâmetros duas variáveis inteiras, X e Y;
b. retorne em X a soma de X e Y;
c. retorne em Y a subtração de X e Y.
Pergunta: a passagem dos parâmetros para a função deve ser por valor ou por referência?
R: Por referência 
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
