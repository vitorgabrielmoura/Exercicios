#include <stdio.h>
#include <stdlib.h>

/* CRIE UM PROGRAMA QUE CALCULA O VALOR A SER PAGO EM UM ESTACIONAMENTO DE ACORDO COM A TABELA ABAIXO:
ATE 15 MINUTOS: GRATIS
ACIMA DE 15 MINUTOS: 3,00 POR HORA
ACIMA DE 10 horas: 30,00 valor único
INFORME O TEMPO EM **MINUTOS** */

int main(int argc, char *argv[]) {
	
	float minutos, horas; // declara as diversas variaveis
	
	
	// lê o quanto de tempo a pessoa passou no estacionamento
	printf("Digite o tempo em que voce passou no estacionamento (em min): ");
	scanf("%f", &minutos);
	horas = minutos / 60;
	
	
	// valores diferentes mostrados na tela de acordo com a resposta do usuario.
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
