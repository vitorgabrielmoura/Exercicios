#include <stdio.h>
#include <stdlib.h>

/* Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número. Faça o mesmo para uma coluna. */


int pegaDados(char dado[10]){
	int dados;
	
	printf("Qual %s voce quer multiplicar? :", dado);
	scanf("%d", &dados);
	return (dados);
}

int main(int argc, char *argv[]) {
	int l, c, matriz[3][3];
	int mult1, mult2, linha, multlinha, coluna, multcoluna;	
	
	for(l=0; l< 3; l++){
		for(c=0; c< 3; c++){
			printf("Digite um numero para a matriz na linha %d e coluna %d ", l, c);
			scanf("%d", &matriz[l][c]);
		}	
	}
	
	printf("\n");
	linha = pegaDados("linha");
	multlinha = pegaDados("numero");
	
	coluna = pegaDados("coluna");
	multcoluna = pegaDados("numero");
	
	printf("\n  MATRIZ\n\n");
	for(l=0; l< 3; l++){
		if (l == linha){
			mult1 = multlinha;
		}
		else{
			mult1 = 1;
		}
		for(c=0; c< 3; c++){
			if (c== coluna){
				mult2 = multcoluna;
			}
			else{
				mult2 = 1;
			}
			printf(" %d  ", matriz[l][c]*mult1*mult2);
		}
	printf("\n");
	}
	return 0;
}
