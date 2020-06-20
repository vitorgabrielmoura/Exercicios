#include <stdio.h>
#include <string.h>

/* Crie uma função recursiva que calcule a somatório de 1 a N. Ex:
Soma(4) = 1 + 2 + 3 + 4
Soma(3) = 1+ 2 + 3*/

int Soma(int n){
	if (n == 0)
		return 0;
	else
		return n + Soma(n-1);
};
			   
int main(int argc, char *argv[]) {
	
	printf("%d", Soma(5));
	
	return 0;
}
