#include <stdio.h>
#include <stdlib.h>

/* Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado. */


int main(int argc, char *argv[]) {
	
	int l, c, matriz[3][3], matriztransposta[3][3];	
	
	for(l=0; l< 3; l++){
		for(c=0; c< 3; c++){
			printf("Digite um numero para a matriz na linha %d e coluna %d ", l, c);
			scanf("%d", &matriz[l][c]);
		}	
	}

	printf("\nMATRIZ TRANSPOSTA\n\n");
	for(l=0; l< 3; l++){
		for(c=0; c< 3; c++){
			matriztransposta[l][c] = matriz[c][l];
			printf("%d  ", matriztransposta[l][c]);
		}
		printf("\n");
	}

	return 0;
}
