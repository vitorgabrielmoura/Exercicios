#include <stdio.h>
#include <stdlib.h>

/* Leia 8 elementos em um vetor inteiro A. Construa outro vetor B, da mesma dimensão de A, com seus 
elementos sendo a multiplicaçãodos elementos de A por 3. Mostre os elementos de B. b[0] = a[0] * 3 */

int main(int argc, char *argv[]) {
	
	int i, vetorA[8], vetorB[8];
	
	for(i=0; i < 8; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &vetorA[i]);
		vetorB[i] = vetorA[i] * 3;
	}
	
	printf("\nVALORES DO VETOR B\n");
	for(i=0; i < 8; i++){
		printf("\n%d. %d ", i+1, vetorB[i]);
	}
	return 0;
}
