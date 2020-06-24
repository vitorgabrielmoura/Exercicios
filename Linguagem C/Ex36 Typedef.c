#include <stdio.h>
#include <string.h>

/* Exemplo da função typedef */

typedef struct{
	int idade;
	char nome[40];
	float peso;
	float altura;
}people;


int main(int argc, char *argv[]) {
	
	people pessoa1;
	strcpy(&pessoa1.nome[0], "Vitu");
	
	people pessoa2;
	strcpy(&pessoa2.nome[0], "Jose");
	
	printf("Pessoa 1 --- %s\n", pessoa1.nome);
	printf("Pessoa 2 --- %s\n", pessoa2.nome);

	
	return 0;
}
