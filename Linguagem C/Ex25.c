#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>//biblioteca p/ as funções isalpha isdigit toupper tolower
#include <string.h>

/* Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. */

void LOwer(char vetor[2][30], int pos){
	int i;
	
	for(i=0; i < strlen(vetor[pos]); i++){
		vetor[pos][i] = tolower(vetor[pos][i]);
		return (vetor[pos][i]);
	}	
}

int main(int argc, char *argv[]) {
	
	int i, cmp, len;
	char nome[2][30];
	
	
	for(i=0; i < 2; i++){
		printf("Digite o %d nome: ", i+1);
		gets(nome[i]);
	}
	
	/* lower the characters for name 1 and 2*/
	LOwer(nome, 0);
	LOwer(nome, 1);
	
	printf("\nOs nomes digitados em ordem alfabetica sao:");
	for(i=0; i< 1; i++){
		cmp = strcmp(nome[0], nome[1]);
		if(cmp < 0){
			printf("\n1. %s", nome[0]);
			printf("\n2. %s", nome[1]);
			break;
		}
		if(cmp > 0){
			printf("\n1. %s", nome[1]);
			printf("\n2. %s", nome[0]);
			break;
		}
	}

	return 0;
}
