#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, qnt_tiragosto, soma = 0, ing, qnt, qnt_chops, pessoas, opc;
	float total, totaling, totalavista, totalcartao; // declara as diversas variaveis
	
	printf("Quantas pessoas ha na mesa?: ");
	scanf("%d", &pessoas); // lê o valor do usuário e atribui a variavel pessoas
	
	printf("Quantos Chops foram pedidos?: ");
	scanf("%d", &qnt_chops); // lê o valor do usuário e atribui a variavel qnt_chops
	
	printf("Quantos tira gosto foram pedidos?: ");
	scanf("%d", &qnt_tiragosto); // lê o valor do usuário e atribui a variavel qnt_tiragosto
	
	// laço de repetição que pergunta o atribui o numero de ingredientes de acordo com o número de tiragostos que foram pedidos
	for (i=1; i< qnt_tiragosto+1; i++){
		printf("Quantos ingredientes no tira gosto de n %d?:", i);
		scanf("%d", &ing);
		soma = soma + ing; // acumulador para quantidade de ingredientes
	}
	
	// para organizar melhor os valores de acordo com cada situação
	totaling = soma * 1.5;
	total = totaling + (qnt_chops*2.5) + (qnt_tiragosto*27);
	totalavista = total - (total*0.2);
	totalcartao = total - (total*0.1);
	
	printf("\nO total com chops foi de R$%.2f\nO total com tiragostos foi de R$%d\n", qnt_chops*2.5 ,qnt_tiragosto*27);
	printf("E os ingrediente extras foram R$%.2f\n\n", totaling);
	
	// laço de repetição que funciona como MENU para escolha das opções, que, enquanto não for digitado um valor válido,
	// vai continuar repetindo.
	do{
		printf("Digite a opcao desejada para pagamento:\n[1]A vista no dinheiro\n[2]Cartao de credito\n[3]Cheque\n>> ");
		scanf("%d", &opc);
	}while(opc > 3 || opc < 1);
	
	// switch case funciona para ler as respostas (no caso de ser 1, vai fazer uma coisa, se for 2, outra e assim adiante)
	switch (opc){
		case 1:printf("\nTotal a pagar: R$%.2f", totalavista);
		printf("\nA quantidade que cada um deve pagar eh de R$%.2f", totalavista/pessoas);break;
		
		case 2: printf("\nTotal a pagar: R$%.2f", totalcartao);
		printf("\nA quantidade que cada um deve pagar eh de R$%.2f", totalcartao/pessoas);break;
		
		case 3: printf("\nTotal a pagar: R$%.2f", total);
		printf("\nA quantidade que cada um deve pagar eh de R$%.2f", total/pessoas);break;
	}
	
	
	printf("\nA gorjeta da garçom eh de R$%.2f", total*0.1);
	
	return 0;
}
