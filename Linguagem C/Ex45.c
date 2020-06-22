#include <stdio.h>
#include <string.h>

/* Fazer uma função que:
a. receba 3 números como parâmetros: A, B e C.
b. ordene de tal forma que, ao final da função, A contenha o menor número e C o
maior.
c. Fazer um programa que receba 3 números do usuário, chame a função e mostre
os números ordenados. 
 */

void ordena(int *a, int *b, int *c){
	int menor = *b;
	int maior = *a;
	
	if(*c < *b)
		menor = *c;
	if(*b > *a)
		maior = *b;
		
	*a = menor;
	*c = maior;
		
};


int main(int argc, char *argv[]) {
	int a=5, b=4, c=3;
	int *p1=&a, *p2=&b, *p3=&c;
	
	ordena(p1, p2, p3);
	printf("Numeros apos a funcao:\na = %d\nb = %d\nc = %d", a, b, c);
	
	
	return 0;
}
