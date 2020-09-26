/* Escreva um programa que leia o valor de 3 lados inteiros positivos (A,B e C) de um triangulo. Depois compare os lados para saber se é apenas uma figura de três lados 
ou se é um triangulo equilatero, escaleno ou isoceles. Imprima ao final o tipo de triangulo. No início do programa compare os lados para saber se é uma figura de três lados 
apenas ou se é um triangulo, Se qualquer um dos lados for maior ou igual a soma dos outros dois então a figura não é um triangulo.  
SE ( A >= (B+ C) ou B >=(A+C) ou C >= (B+A) ). Verifique na internet as outas checagens. */

#include <iostream>
#include <math.h>
#include <cstdlib> 
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, opcao;
	
	REPETIR:
		system("cls");
		cout << "Digite abaixo os 3 lados do triângulo: " << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		
		if ( a > fabs(b - c) && a < b + c && b > fabs(a - c) && b < a + c && c > fabs(a - b) && c < a + b){
			if (a == b && a == c && b == c)
				cout << endl << "É um triângulo equilátero!" << endl;
			else if (a != b && a != c && b != c)
				cout << endl << "É um triângulo escaleno!" << endl;
			else
				cout << endl << "É um triângulo isósceles!" << endl;
		}
		else{
			cout << endl << "Não é um triângulo" << endl;
		}
		
		cout << endl << "Deseja digitar outros números? (1-sim ou 0-não) :" << endl;
		cin >> opcao;
		
		if (opcao){
			goto REPETIR;
		}
		else{
			exit(0);
		}
	
	
	return 0;
}
