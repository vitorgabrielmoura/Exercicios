#include <stdio.h>
#include <stdlib.h>

/* Leia 10 valores inteiros e armazene-os em um Vetor. Em seguida, imprima todos os elementos. */

int main(int argc, char *argv[]) {
	
	int i, vetor[9];
	
	for(i=0; i < 10; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nVALORES DIGITADOS:\n");
	for(i=0; i< 10; i++){
		printf("\n%d", vetor[i]);
	}
	
	return 0;
}
