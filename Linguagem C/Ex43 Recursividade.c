#include <stdio.h>
#include <string.h>

/* . Escreva uma fun��o recursiva que determine quantas vezes um d�gito K ocorre em um n�mero natural N. 
Por exemplo, o d�gito 2 ocorre 3 vezes em 762021192. */

int Ocorrencias(int digito, int n){
	int cont = 0;
	
	if (n == 0)
		return cont;
	else
		if (n%10 == digito){
			cont++;
		}
		return cont + Ocorrencias(digito, n/10);
};
			   
int main(int argc, char *argv[]) {
	
	printf("O numero aparece %d vezes", Ocorrencias(2, 762021192));
	
	return 0;
}
