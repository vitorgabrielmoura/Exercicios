#include <stdio.h>
#include <stdlib.h>

/* Um banco concede um crédito especial aos seus clientes,
variável com o saldo médio no último ano. Construa um algoritmo
que leia o saldo médio de um cliente e calcule o
valor do crédito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo médio e o valor do crédito.
Saldo médio Percentagem
- de 0 a 200 nenhum crédito
- de 201 a 400 20% do valor do saldo médio
- de 401 a 600 30% do valor do saldo médio
- acima de 601 40% do valor do saldo médio */

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
