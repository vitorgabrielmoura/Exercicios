#include <stdio.h>
#include <stdlib.h>

/* Leia 15 caracteres e armezene-os em um Vetor. Em seguida, mostre todos osc aracteres em sequência contrária. */

int main(int argc, char *argv[]) {
	
	int i;
	char vetor[15];
	
	for(i=0; i < 15; i++){
		printf("Digite o %d caracter: ", i+1);
		fflush(stdin);
		scanf("%c", &vetor[i]);
	}
	
	printf("\nVALORES DIGITADOS EM ORDEM REVERSA\n");
	for(i=15; i >= 0; i--){
		printf("\n%c", vetor[i]);
	}
	
	return 0;
}
