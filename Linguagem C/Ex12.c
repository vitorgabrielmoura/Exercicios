#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Faça uma simulação de menu que exiba mensagens diferentes dependendo da opção (switch case) */

int main(int argc, char *argv[]) {
	int opc, num;
	
	do{
		printf("\nDigite a opcao desejada:\n\n[1]Numero aleatorio\n[2]Diga ola mundo\n[3]Detalhes\n[4]Sair\n");
		scanf("%d", &opc);
		
		
		switch(opc){
			case 1: 
				srand(time(NULL));
				printf("\n%d\n", rand() % 100);
				break;
			case 2: printf("\NOla mundo\N");break;
			case 3:;printf("\nFiz esse algoritmo em 17/06/2020\n");break;
			case 4: printf("\nAte mais!\n");break;
		}	
	}while(opc != 4);
}
