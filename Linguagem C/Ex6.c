#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	float num[9]; // declara as diversas variaveis, o num é um vetor , que é uma variavel composta, 
	// armaneza varios valores diferentes dentro dela
	
	// laço de repetição para ler e armazenar 10 números na posição i
	for (i=0; i<=9; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%f", &num[i]);
	}
	printf("\n");
	
	// laço de repetição que mostra cada número na posição i e ele mesmo multiplicado por 5
	for (i=0; i<=9; i++){
		printf("\n %.1f x 5 = %.1f", num[i], num[i]*5);
	}
	
	return 0;
}
