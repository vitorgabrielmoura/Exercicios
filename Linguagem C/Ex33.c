#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Fa�a uma verifica��o de senha b�sica com a senha "LinguagemC"  */


int main(int argc, char *argv[]) {
	char senha[10];
	int valido = 0;
	
	printf("Digite a senha: ");
	gets(senha);
	if(strcmp("LinguagemC", senha) == 0){
		valido = 1;
	}
	
	if (strlen(senha) > 10){
		valido = 0;
	}
		
	if (valido){
		printf("Acesso autorizado");
	}
	else{
		printf("Acesso negado");
	}
	
	

	return 0;
}
