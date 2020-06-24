#include <stdio.h>
#include <stdlib.h>

/*  Fa�a um programa que leia um valor n e crie dinamicamente um vetor de n elementos
e passe esse vetor para uma fun��o que vai ler os elementos desse vetor. Depois, no
programa principal, o vetor preenchido deve ser impresso. Al�m disso, antes de
finalizar o programa, deve-se liberar a �rea de mem�ria alocada. */

void LerVetor(int *vetor, int n){
	int i;
	
	for(i=0; i < n; i++){
		printf("Digite o valor para o vetor[%d]", i);
		scanf("%d", &vetor[i]);
	}
	
};

int main(int argc, char *argv[]){
	int n, i, k;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	int *p = (int *) malloc(n * sizeof(int));
	
	LerVetor(p, n);
	
	printf("VETOR:\n\n");
	for(i=0; i < n; i++){
		printf("%d\n", p[i]);
	}
	
	free(p);
	
	return 0;
	
}
