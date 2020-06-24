#include <stdio.h>
#include <string.h>

/*  Escreva uma func¸ao que receba um array de inteiros V e os enderec¸os de duas variaveis ´
inteiras, min e max, e armazene nessas variaveis o valor minimo e maximo do array. ´
Escreva tambem uma função main que use essa funcão.  */

void funcao(int v[5], int *min, int *max){
	int menor, maior, i;
	
	for(i=0; i < 5; i++){
		if (i == 0){
			menor = v[i];
			maior = v[i];
		}
		if (v [i] < menor)
			menor = v[i];
		if (v[i] > maior)
			maior = v[i];
	}
	
	*min = menor;
	*max = maior;
	
};


int main(int argc, char *argv[]) {
	int v[5] = {-2,2,3,77,5}, min, max;
	
	funcao(v, &min, &max);
	printf("Minimo: %d\nMaximo: %d", min, max);
	
	return 0;
}
