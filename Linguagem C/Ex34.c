#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 10

/* Faça uma verificação de senha básica com a senha "LinguagemC"  */


int main(int argc, char *argv[]) {
	char senha[tam];
	int valido = 0;
	
	printf("Digite a senha: ");
	gets(senha);
	if(strcmp("LinguagemC", senha) == 0){
		valido = 1;
	}
	
	if (strlen(senha) > 10){
		valido = 0;
	}
	
	// condição ? comando pra condição vdd : comando pa cond falsa
	valido == 1 ? printf("Acesso autorizado") : printf("Acesso negado");

	

	return 0;
}
