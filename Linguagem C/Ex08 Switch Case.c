#include <stdio.h>
#include <stdlib.h>

/* Desenvolva uma simulação de uma calculadora básica */

int main(int argc, char *argv[]) {
	int i, opc;
	float num1, num2;
	
	do{	
	printf("\nDigite o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num2);
	
	printf("\nDigite a opcao desejada:\n\n[1]Soma\n[2]Subtracao\n[3]Multiplicacao\n[4]Divisao\n[5]Sair\n");
	scanf("%d", &opc);
	
	
	switch(opc){
		case 1: printf("----> %.1f + %.1f = %.1f\n", num1, num2, num1+num2);break;
		case 2: printf("----> %.1f - %.1f = %.1f\n", num1, num2, num1-num2);break;
		case 3: printf("----> %.1f * %.1f = %.1f\n", num1, num2, num1*num2);break;
		case 4: printf("----> %.1f / %.1f = %.1f\n", num1, num2, num1/num2);break;
		case 5: printf("Ate mais!\n");break;
	}
	
	}while(opc != 5);
	
	return 0;
}
