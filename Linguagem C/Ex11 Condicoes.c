#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fa�a um algoritimo que cacule a f�rmula de bhaskara */

int main(int argc, char *argv[]) {
	int a, b, c;
	float delta, x1, x2;
	
	a = 2;
	b = 12;
	c = -14;
	
	delta = b*b - (4*a*c);
	
	if (delta <= 0){
		printf("Delta menor que 0. Nao existem raizes.");
	}
	else{
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("Ra�zes da equa��o:\nx1: %.1f\nx2: %.1f", x1, x2);
	}
	
	
	return 0;
}
