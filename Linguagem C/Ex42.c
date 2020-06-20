#include <stdio.h>
#include <string.h>

/* . Escreva uma fun��o recursiva que calcule a soma dos d�gitos de um n�mero inteiro. Por exemplo, se a entrada for 223, 
a sa�da dever� ser 2+2+3 = 7. */

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
