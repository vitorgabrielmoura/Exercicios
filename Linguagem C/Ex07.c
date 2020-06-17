#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um algoritmo onde o usuário possa digitar os valores da base e da altura e calcule a área do triângulo. */

int main(int argc, char *argv[]) {
	float dados[2], area;
	
	printf("Digite a base, em cm, do triangulo: ");
	scanf("%f", &dados[0]);
	
	printf("Digite a altura, em cm, do triangulo: ");
	scanf("%f", &dados[1]);
	
	area = (dados[0] * dados[1])/2;
	printf("\nA area do triangulo eh de %.1f cm²", area);
	
	return 0;
}
