#include <stdio.h>
#include <stdlib.h>

/* Leia dois vetores A e B inteiros, da mesma dimensão. Construa o vetor C, de mesma dimensão, cujo elementos de C é a subtração dos
elementos de A por B. Mostre o vetor C. c[0] = a[0] - b[0] */

int main(int argc, char *argv[]) {
	
		int i, vetorC[4], vetorB[4], vetorA[4];
	
	for(i=0; i < 4; i++){
		printf("\nDigite o %d numero para o vetorA: ", i+1);
		scanf("%d", &vetorA[i]);
		printf("Digite o %d numero para o vetorB: ", i+1);
		scanf("%d", &vetorB[i]);
		vetorC[i] = vetorA[i] - vetorB[i];
	}
	
	printf("\nVALORES DO VETOR C\n");
	for(i=0; i < 4; i++){
		printf("\n%d. %d ", i+1, vetorC[i]);
	}
	
	return 0;
}
