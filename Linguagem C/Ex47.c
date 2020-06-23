#include <stdio.h>
#include <string.h>

/*  Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o ponteiro ao array. Agora, some 
mais um (+1) a cada posic¸ao do array usando o ponteiro (use *). */

int main(int argc, char *argv[]) {
	int array[5] = {1,2,3}, i;
	int *p = array;
	
	*(p) = *(p) + 1;
	*(p+1) = *(p+1) + 1;
	*(p+2) = *(p+2) + 1;
	printf("%d\n", array[0]);
	printf("%d\n", array[1]);
	printf("%d", array[2]);
	return 0;
}
