#include <stdio.h>
#include <string.h>

/* . Escreva uma função recursiva que calcule a soma dos dígitos de um número inteiro. Por exemplo, se a entrada for 223, 
a saída deverá ser 2+2+3 = 7. */

int Soma(int n){
	int digito;
	if (n == 0)
		return 0;
	else
		return n % 10 + Soma(n/10);
};
			   
int main(int argc, char *argv[]) {

	printf("%d", Soma(223));
	
	return 0;
}
