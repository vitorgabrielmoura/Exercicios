#include <stdio.h>
#include <stdlib.h>

/* *Construir um algoritmo que leia em um vetor os modelos de cinco carros (Ex: Fusca, Gol, Vectra, etc). Guardar apenas o primeiro
caractere do modelo, por exemplo: f, g, v, etc.
* leia outro vetor com o consumo desses carros, isto é, quantos km cada um desses carros faz com 1 litro de combustível. Calcule e mostre:
- O modelo do carro mais econômica
- Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distancia de 1000 km. */

int main(int argc, char *argv[]) {
	
	char carrostd[5][20], carros[5], economico;
	int i;
	float consumo[5], menor;
	
	for(i=0; i< 5; i++){
		printf("\nDigite o modelo do carro n %d: ", i+1);
		scanf("%s", &carrostd[i]);
		carros[i] = carrostd[i][0];
		printf("Qual o consumo desse carro? KM/1L : ");
		scanf("%f", &consumo[i]);
		if (i == 0){
			menor = carros[i];
		}
		if (consumo[i] > menor){
			economico = carros[i];
		}
	}
	
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n                FIM\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	printf("\n\nModelo mais economico: %c", economico);
	printf("\n\nLITROS NECESSARIOS PARA PERCORRER 1000 KM:\n");
	
	for(i=0; i< 5; i++){
		printf("\nCarro %c - %.1fL", carros[i], 1000/consumo[i]);
	}
	
	
	return 0;
}
