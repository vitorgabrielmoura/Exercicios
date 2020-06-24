#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritimo que leia um número inteiro e mostre sua tabuada */

int main(int argc, char *argv[]) {
	int num, i;
	
	printf("Qual numero voce quer ver sua tabuada?: ");
	scanf("%d", &num);
	
	for(i=1; i < 10; i++){
		printf("\n%d * %d = %d", num, i, num*i);
	}
	
	return 0;
}
