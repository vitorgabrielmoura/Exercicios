#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	char nome[5][30]; // declara as diversas variaveis, o char é uma matriz de texto, nesse caso
	// podem ser contidos 5 nomes de até 30 caracteres cada, cada letra pode ser acessada usando
	//o indice nome[x][letra]
	
	// laço de repetição para ler e armazenar os 5 nomes
	for (i = 1; i <= 5; i++){
		printf("Digite o %d nome: ", i);
		gets(nome[i-1]);
	}
	
	
	// laço de repetição paramostrar os 5 nomes em ordem normal na tela
	printf("\nEsses foram os nomes digitados:");
	for(i=1; i<= 5; i++){
		printf("\n%d. - %s", i, nome[i-1]);
	}
	
	// laço de repetição paramostrar os 5 nomes em ordem inversa na tela
	printf("\n\nEm ordem reversa:");
	for(i=5; i>=1; i--){
		printf("\n%d. - %s", i, nome[i-1]);
	}
	
	
	return 0;
}
