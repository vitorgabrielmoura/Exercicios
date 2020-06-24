#include <stdio.h>
#include <stdlib.h>

/* Desenvolva uma algoritimo que calcule o IMC de um paciente */

int main(int argc, char *argv[]) {
	float peso, altura;
	float imc;
	
	printf("Qual seu peso em kg?: ");
	scanf("%f", &peso);
	
	printf("Qual sua altura em m?: ");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
	if(imc > 40){
		printf("\nIMC de %.1f - OBESIDADE MORBIDA GRAU III", imc);
	}
	else if(imc > 35){
		printf("\nIMC de %.1f - OBESIDADE GRAU II", imc);
	}
	else if(imc > 30){
		printf("\nIMC de %.1f - OBESIDADE GRAU I", imc);
	}
	else if(imc > 25){
		printf("\nIMC de %.1f - LEVEMENTE ACIMA DO PESO", imc);
	}
	else if(imc > 18.6){
		printf("\nIMC de %.1f - PESO IDEAL", imc);
	}
	else{
		printf("\nIMC de %.1f - ABAIXO DO PESO", imc);
	}
	
	return 0;
}
