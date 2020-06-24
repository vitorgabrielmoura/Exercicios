#include <stdio.h>
#include <string.h>

/* . Escreva um algoritmo que leia um número e o imprima em ordem contrária. */
		   
int main(int argc, char *argv[]) {
	
	int numero, ultdigito;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	if(numero >= 0){
		do{
			ultdigito = numero %10;
			printf("%d", ultdigito);
			numero = numero /10;
		} while (numero != 0);
	}
	
	
	return 0;
}
