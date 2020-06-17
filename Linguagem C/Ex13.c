#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que copie o conteúdo de um vetor em um segundo vetor. */

int main(int argc, char *argv[]) {
	
	float vetorA[5], vetorB[5];  // declara as diversas variaveis, sendo dois deles vetores
	int i, count = 0;
	
	// laço de repetição que lê 5 números e armazena eles na variavel vetorA, e logo após
	// esse valor é copiado para o vetorB na mesma posição do vetor A
	for (i=0; i <=4; i++){
		printf("Digite um numero para a posicao %d do vetor A: ", i+1);
		scanf("%f", &vetorA[i]);
		vetorB[i] = vetorA[i];
	}
	
	// laço de repetição que mostra todos os valores do vetorB e A, até todos se esgotarem
	do{
		printf("\nVetorA: %.1f - Vetor B: %.1f", vetorA[count], vetorB[count]);
		count ++;
	} while (count != 5);
	
	
	return 0;
}
