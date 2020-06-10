#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que solicite a entrada de 10 n�meros pelo usu�rio, armazenando-os em um vetor, e ent�o monte outro vetor com os 
valores do primeiro multiplicados por 5. Exiba os valores dos dois vetores na tela, simultaneamente, 
em duas colunas (um em cada coluna), uma posi��o por linha. */

int main(int argc, char *argv[]) {
	
	int i;
	float num[9]; // declara as diversas variaveis, o num � um vetor , que � uma variavel composta, 
	// armaneza varios valores diferentes dentro dela
	
	// la�o de repeti��o para ler e armazenar 10 n�meros na posi��o i
	for (i=0; i<=9; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%f", &num[i]);
	}
	printf("\n");
	
	// la�o de repeti��o que mostra cada n�mero na posi��o i e ele mesmo multiplicado por 5
	for (i=0; i<=9; i++){
		printf("\n %.1f x 5 = %.1f", num[i], num[i]*5);
	}
	
	return 0;
}
