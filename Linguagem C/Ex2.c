#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float saldo; // declara a variavel a ser lida
	
	printf("Digite o seu saldo medio: R$");
	scanf("%f", &saldo); // lê o valor do usuário e atribui a variavel saldo
	
	// condições de acordo com a resposta do usuário
	if (saldo >= 601){
		printf("Com o saldo de R$%.1f, o seu credito eh de R$%.2f", saldo, saldo*0.4);
	}
	else if (saldo >= 401){
		printf("Com o saldo de R$%.1f, o seu credito eh de R$%.2f", saldo, saldo*0.3);
	}
	else if (saldo >= 201){
		printf("Com o saldo de R$%.1f, o seu credito eh de R$%.2f", saldo, saldo*0.2);
	}
	else{
		printf("Voce nao tem nenhum credito disponivel :(");
	}
	return 0;
}
