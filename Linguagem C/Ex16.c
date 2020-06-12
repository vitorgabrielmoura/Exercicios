#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Sortear 1000 números inteiros e armazenar em um vetor. 
Percorrer o vetor e e encontrar o menor elemento. */

int main(int argc, char *argv[]) {
	
	int i, vetor[1000], menor;
	srand(time(NULL));
	
	for(i=0; i < 1000; i++){
		vetor[i] = rand() % 1000;
		if(i == 0){
			menor = vetor[i];
		}
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	
	printf("O menor valor encontrado foi %d", menor);
	
	return 0;
}
