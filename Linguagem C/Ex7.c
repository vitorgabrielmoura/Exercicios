#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float vetorA[5], vetorB[5];  // declara as diversas variaveis, sendo dois deles vetores
	int i, count = 0;
	
	// la�o de repeti��o que l� 5 n�meros e armazena eles na variavel vetorA, e logo ap�s
	// esse valor � copiado para o vetorB na mesma posi��o do vetor A
	for (i=0; i <=4; i++){
		printf("Digite um numero para a posicao %d do vetor A: ", i+1);
		scanf("%f", &vetorA[i]);
		vetorB[i] = vetorA[i];
	}
	
	// la�o de repeti��o que mostra todos os valores do vetorB e A, at� todos se esgotarem
	do{
		printf("\nVetorA: %.1f - Vetor B: %.1f", vetorA[count], vetorB[count]);
		count ++;
	} while (count != 5);
	
	
	return 0;
}
