#include <stdio.h>
#include <string.h>

/* . Fa�a uma fun��o recursiva que permita inverter um n�mero inteiro N. Ex: 123 - 321 */

int inverte(int n){
	if (n == 0)
		return 0;
	else
		printf("%d", n%10);
		return inverte(n/10);
};
			   
int main(int argc, char *argv[]) {

	inverte(123);
	
	return 0;
}
