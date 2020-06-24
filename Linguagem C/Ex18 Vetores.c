#include <stdio.h>
#include <stdlib.h>


/* Leia 15 caracteres e armezene-os em um Vetor. Em seguida, mostre todos osc aracteres em sequ�ncia contr�ria. */
/* *Construir um algoritmo que leia em um vetor os modelos de cinco carros (Ex: Fusca, Gol, Vectra, etc). Guardar apenas o primeiro
caractere do modelo, por exemplo: f, g, v, etc.
* leia outro vetor com o consumo desses carros, isto é, quantos km cada um desses carros faz com 1 litro de combustível. Calcule e mostre:
- O modelo do carro mais econômica
- Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distancia de 1000 km. */

int main(int argc, char *argv[]) {
	
	int i;
	char vetor[15];
	
	for(i=0; i < 15; i++){
		printf("Digite o %d caracter: ", i+1);
		fflush(stdin);
		scanf("%c", &vetor[i]);
	
	for(i=0; i< 5; i++){
		printf("\nDigite o modelo do carro n %d: ", i+1);
		scanf("%s", &carrostd[i]);
		carros[i] = carrostd[i][0];
		printf("Qual o consumo desse carro? KM/1L : ");
		scanf("%f", &consumo[i]);
		if (i == 0){
			menor = consumo[i];
		}
		if (consumo[i] > menor){
			economico = carros[i];
		}

	}
	
	printf("\nVALORES DIGITADOS EM ORDEM REVERSA\n");
	for(i=15; i >= 0; i--){
		printf("\n%c", vetor[i]);
	}
	
	return 0;
}
