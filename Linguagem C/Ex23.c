#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Criar um vetor para armazenar 10.000 números inteiros gerados de forma aleatória (entre 1 e 10). Após gerar o vetor, calcular a quantidade
de vezes que cada número foi sorteado. 
Ex: o Número 1 aparece 5 vezes
	O número 2 aparece 4 vezes*/

int main(int argc, char *argv[]) {
	
	float vetor[10000];
	int i, x, cont;
	srand(time(NULL));
	
	for(i=0; i < 10000; i++){
		vetor[i] = 1 + (rand() % 10);
		}
	
	for(i=1; i< 11; i++){
		cont = 0;
		for(x=0; x < 10000; x++){
			if(i == vetor[x]){
				cont ++;
			}		
		}
		printf("O numero %d aparece %d vezes\n", i, cont);
	}
	
	return 0;
}
