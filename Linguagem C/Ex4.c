#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num[5], soma; // declara as diversas variaveis, o num � um vetor
	int i = 0;  // um vetor � uma variavel composta, armaneza varios valores diferentes dentro dela
	
	// la�o de repeti��o que vai incrementendo 1 na variavel i, que come�a com 0 e a repeti��o vai parar
	// quando o i for igual a 5, ou seja, qnd 5 valores forem digitados
	do{	
		printf("Digite o %d numero: ", i+1);
		scanf("%f", &num[i]); // l� o valor do usu�rio e atribui a variavel num na posi��o i
		soma = soma + num[i];
		i++;	
	}while (i < 5);
	
	
	printf("\nA soma desses numeros eh %.2f\n", soma);
	printf("Voce digitou os seguintes numeros:");
	
	// la�o de repeti��o para mostrar os valores contidos no vetor na tela
	for (i=0; i<=4; i++){
		printf("\n%.1f", num[i]);
	}
	
	return 0;
}
