#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. 
O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas. A struct deve 
armazenar os dados de idade, peso e altura. */

struct dados_pessoas{
	char nome[50];
	int idade;
	float peso, altura;
};

int main(int argc, char *argv[]) {
	struct dados_pessoas pessoa[3];
	int i;
	
	for(i=0; i< 3; i++){
		printf("\n\nNome da pessoa %d: ", i+1);
		fflush(stdin);
		gets(pessoa[i].nome);
		
		printf("Idade: ");
		scanf("%d", &pessoa[i].idade);
		
		printf("Peso: ");
		scanf("%f", &pessoa[i].peso);
		
		printf("Altura: ");
		scanf("%f", &pessoa[i].altura);
	}
	
	for(i=0; i< 3; i++){
		printf("\n\nNome... %s: ", pessoa[i].nome);
		printf("\nIdade... %d", pessoa[i].idade);
		printf("\nPeso... %.1f kg", pessoa[i].peso);
		printf("\nAltura... %.1fm", pessoa[i].altura);
	}
	
	return 0;
}
