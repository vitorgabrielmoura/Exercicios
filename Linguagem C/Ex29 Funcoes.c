#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Fa�a uma fun��o que retorne a posi��o de um dado caracter dentro de uma string. */

char posicao(char string[50], int pos){
	int i;
	char caracter;
	
	for(i=0; i < strlen(string); i++){
		if(i == pos){
			caracter = string[i];
		}
	}
	return (caracter);
}

int main(int argc, char *argv[]) {
	char resultado;
	
	resultado = posicao("FUNCAO FEITA", 7);
	printf("O caracter encontrado nessa posicao foi %c" , resultado);
	

	return 0;
}
