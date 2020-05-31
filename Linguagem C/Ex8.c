#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float minutos, horas; // declara as diversas variaveis
	
	
	// lê o quanto de tempo a pessoa passou no estacionamento
	printf("Digite o tempo em que voce passou no estacionamento (em min): ");
	scanf("%f", &minutos);
	horas = minutos / 60;
	
	
	// valores diferentes mostrados na tela de acordo com a resposta do usuario
	if(minutos > 15){
		printf("\nVoce deve pagar R$%.2f", horas*3);
	}
	else if (horas > 10){
		printf("\nVoce deve pagar R$30.00");
	}
	else{
		printf("\nVoce nao deve pagar nada!");
	}
	
	
	return 0;
}
