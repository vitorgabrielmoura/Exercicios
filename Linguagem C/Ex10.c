#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. Calcular 
a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar 
o conceito de acordo com a tabela: 

maior ou igual a 9 -> A
maior ou igual a 7.5 e menor que 9 -> B
maior ou igual a 6 e menor que 7.5 -> C
maior ou igual a 4 e menor que 6 ->	D
menor que 4	-> E*/

int main(int argc, char *argv[]) {
	
	float notas[2], ma, me;
	int i;
	
	for(i=0; i < 3; i++){
		printf("Digite a nota n.%d: ", i+1);
		scanf("%f", &notas[i]);
	}
	
	me = (notas[0]+notas[1]+notas[2])/3;
	ma = (notas[0] + (notas[1]*2) + (notas[2]*3) + me)/7;
	
	if (ma >= 9){
		printf("%.1f - Aproveitamento nivel A!", ma);
	}
	else if (ma >= 7.5){
		printf("%.1f - Aproveitamento nivel B!", ma);
	}
	else if (ma >= 6){
		printf("%.1f - Aproveitamento nivel C!", ma);
	}
	else if (ma >= 4){
		printf("%.1f - Aproveitamento nivel D!", ma);
	}
	else{
		printf("%.1f - Aproveitamento nivel E...", ma);
	}
	
	return 0;
}
