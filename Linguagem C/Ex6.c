#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
