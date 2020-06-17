#include <stdio.h>
#include <stdlib.h>

/* Crie uma função capaz de criar a transposta de uma matriz. */

void transporMatriz(int matriz[3][3]){
	int l, c, matriztransposta[3][3];	
	
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
}

int main(int argc, char *argv[]) {
	int matriz[3][3];
	
	transporMatriz(matriz);
	

	return 0;
}
