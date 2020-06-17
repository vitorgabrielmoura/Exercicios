#include <stdio.h>
#include <stdlib.h>

/* Leia dois vetores reais A (de tamanho 4) e B (de tamanho 7). Construa um 3ª vetor que seja a junção de A e B 
(colocar os elementos de A seguidos dos elementos de B) */

int main(int argc, char *argv[]) {
	
	float vetorA[4], vetorB[7], vetorC[11];
	int i;
	
	for(i=0; i < 7; i++){
		if(i < 4){
			printf("\nDigite o %d numero para o vetorA: ", i+1);
			scanf("%f", &vetorA[i]);
			vetorC[i] = vetorA[i];
		}
		printf("Digite o %d numero para o vetorB: ", i+1);
		scanf("%f", &vetorB[i]);
		vetorC[i+4] = vetorB[i];
	}
	
	printf("\nVALORES DO VETOR C\n");
	for(i=0; i < 11; i++){
		printf("\n%d. %.1f ", i+1, vetorC[i]);
	}
	
	return 0;
}
