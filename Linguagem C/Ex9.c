#include <stdio.h>
#include <stdlib.h>

/* Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura o programa deverá imprimir o número 
da linha que contém o menor dentre todos os números lidos. */

int main(int argc, char *argv[]) {
	
	int matriz[3][3]; // o primeiro 2 é o numero de linhas e o segundo, colunas, nesse caso matriz 2x2
	int l, c;
	int menor, lmenor;
	
	for(l=0; l<3; l++){
		printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nLINHA %d \n", l);
		for(c=0; c<3; c++){
			printf("Digite um valor inteiro para a coluna %d:", c);
			scanf("%d", &matriz[l][c]);
			if (l == 0 && c == 0){
				menor = matriz[l][c];
			}
			if (matriz[l][c] < menor){
				lmenor = l;
			}
		}
	}
	printf("\nO menor valor digitado pode ser encontrado na linha %d", lmenor);
	return 0;
}
