#include <stdio.h>
#include <stdlib.h>

/* Um banco concede um cr�dito especial aos seus clientes,
vari�vel com o saldo m�dio no �ltimo ano. Construa um algoritmo
que leia o saldo m�dio de um cliente e calcule o
valor do cr�dito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito.
Saldo m�dio Percentagem
- de 0 a 200 nenhum cr�dito
- de 201 a 400 20% do valor do saldo m�dio
- de 401 a 600 30% do valor do saldo m�dio
- acima de 601 40% do valor do saldo m�dio */

int main(int argc, char *argv[]) {
	
	float saldo; // declara a variavel a ser lida
	
	printf("Digite o seu saldo medio: R$");
	scanf("%f", &saldo); // l� o valor do usu�rio e atribui a variavel saldo
	
	// condi��es de acordo com a resposta do usu�rio
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
