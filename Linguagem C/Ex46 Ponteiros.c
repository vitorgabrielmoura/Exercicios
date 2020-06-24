#include <stdio.h>
#include <string.h>

/*  Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o enderec¸o das posic¸oes contendo valores pares.  */

int main(int argc, char *argv[]) {
	int array[5], i;
	int *p = array;
	
	for(i=0; i < 5; i++){
		if (p[i] % 2 == 0){
			printf("%d\n", p+i);
		}
	}
	
	return 0;
}
