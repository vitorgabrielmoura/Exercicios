/* Escreva um programa que leia o valor de 3 lados inteiros positivos (A,B e C) de um triangulo. Depois compare os lados para saber se � apenas uma figura de tr�s lados 
ou se � um triangulo equilatero, escaleno ou isoceles. Imprima ao final o tipo de triangulo. No in�cio do programa compare os lados para saber se � uma figura de tr�s lados 
apenas ou se � um triangulo, Se qualquer um dos lados for maior ou igual a soma dos outros dois ent�o a figura n�o � um triangulo.  
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
		cout << "Digite abaixo os 3 lados do tri�ngulo: " << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		
		if ( a > fabs(b - c) && a < b + c && b > fabs(a - c) && b < a + c && c > fabs(a - b) && c < a + b){
			if (a == b && a == c && b == c)
				cout << endl << "� um tri�ngulo equil�tero!" << endl;
			else if (a != b && a != c && b != c)
				cout << endl << "� um tri�ngulo escaleno!" << endl;
			else
				cout << endl << "� um tri�ngulo is�sceles!" << endl;
		}
		else{
			cout << endl << "N�o � um tri�ngulo" << endl;
		}
		
		cout << endl << "Deseja digitar outros n�meros? (1-sim ou 0-n�o) :" << endl;
		cin >> opcao;
		
		if (opcao){
			goto REPETIR;
		}
		else{
			exit(0);
		}
	
	
	return 0;
}
