#include <stdio.h>
#include <stdlib.h>

/* Leia 15 caracteres e armezene-os em um Vetor. Em seguida, mostre todos osc aracteres em sequência contrária. */

int main(int argc, char *argv[]) {
	
	int i, vetor[15];
	
	for(i=0; i < 15; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nVALORES DIGITADOS EM ORDEM REVERSA\n");
	for(i=14; i >= 0; i--){
		printf("\n%d\n", vetor[i]);
	}
	
	return 0;
}
