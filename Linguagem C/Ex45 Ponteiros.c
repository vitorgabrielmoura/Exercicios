#include <stdio.h>
#include <string.h>

/* Fazer uma fun��o que:
a. receba 3 n�meros como par�metros: A, B e C.
b. ordene de tal forma que, ao final da fun��o, A contenha o menor n�mero e C o
maior.
c. Fazer um programa que receba 3 n�meros do usu�rio, chame a fun��o e mostre
os n�meros ordenados. 
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
