#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* PROGRAMA QUE CHECA SE UM CPF É VÁLIDO */

int main(int argc, char *argv[]) {
	int flag=1, i, x, cont=0, soma, digito1, digito2;
	char cpf[10];
	
	do{
		printf("Digite o CPF sem digitos OU S para parar: ");
		scanf("%s", cpf);
		
		if (cpf[0] == 's' || cpf[0] == 'S'){
			printf("Ate mais.");
			break;
		}
		
		else if (strlen(cpf) != 11 && flag){
			printf("Voce nao digitou os 11 digitos\n");
			continue;
		}
		
		for (i=20; i>1; i--){
			x = i;
			if (i > 11)
				x = i -10;
			soma += x * (cpf[cont] - 48);
			cont++;
			if (i == 12){
				if (11 - (soma % 11) > 9)
					digito1 = 0;
				else
					digito1 = 11 - (soma % 11);	
				soma = 0;
				cont = 0;
			}	
			if (i == 2){
				if (11 - (soma % 11) > 9)
					digito2 = 0;
				else
					digito2 = 11 - (soma % 11);
			}
		}
		if (cpf[9] - 48 == digito1 && cpf[10] - 48 == digito2)
			printf("\nCPF VALIDO!\n\n");
		else
			printf("\nCPF INVALIDO!\n\n");
		
	
	} while (flag);
	
	return 0;
}
