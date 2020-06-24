#include <stdio.h>
#include <string.h>

/*  Considere a seguinte declarac¸ao: int A, *B, **C, ***D; Escreva um programa que leia a ˜
variavel a e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas ´
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quadruplo.  */

int main(int argc, char *argv[]) {
	int A, *B, **C, ***D;
	
	scanf("%d", &A);
	B = &A;
	C = &B;
	D = &C;
	printf("Dobro: %d\nTriplo: %d\nQuadruplo: %d", (*B)*2, (**C)*3, (***D)*4);
	
	return 0;
}
