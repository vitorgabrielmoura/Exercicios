#include <stdio.h>
#include <stdlib.h>

/* Escreva um algoritmo que solicite ao usu�rio a entrada de 5 nomes, e que exiba a lista desses nomes na tela. Ap�s exibir 
essa lista, o programa deve mostrar tamb�m os nomes na ordem inversa em que o usu�rio os digitou, um por linha */

int main(int argc, char *argv[]) {
	
	int i;
	char nome[5][30]; // declara as diversas variaveis, o char � uma matriz de texto, nesse caso
	// podem ser contidos 5 nomes de at� 30 caracteres cada, cada letra pode ser acessada usando
	//o indice nome[x][letra]
	
	// la�o de repeti��o para ler e armazenar os 5 nomes
	for (i = 1; i <= 5; i++){
		printf("Digite o %d nome: ", i);
		gets(nome[i-1]);
	}
	
	
	// la�o de repeti��o paramostrar os 5 nomes em ordem normal na tela
	printf("\nEsses foram os nomes digitados:");
	for(i=1; i<= 5; i++){
		printf("\n%d. - %s", i, nome[i-1]);
	}
	
	// la�o de repeti��o paramostrar os 5 nomes em ordem inversa na tela
	printf("\n\nEm ordem reversa:");
	for(i=5; i>=1; i--){
		printf("\n%d. - %s", i, nome[i-1]);
	}
	
	
	return 0;
}
