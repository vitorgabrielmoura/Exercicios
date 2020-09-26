#include <iostream>
#include <math.h>
#include <cstdlib> 
using namespace std;

/* 1. Escreva um programa para ler o n�mero de lados de um pol�gono regular e a medida do lado (em cm). 

- Se o n�mero de lados for igual a 3 imprima �TRI�NGULO�, calcule e mostre a �rea do tri�ngulo 

- Se o n�mero de lados for igual a 4 imprima �QUADRADO�, calcule  e mostre a �rea do quadrado. 

- Se o n�mero de lados for igual a 5 imprime  �PENT�GONO�, calcule e mostre a �rea do pent�gono. 

Acrescente as seguintes mensagens ao exerc�cio 1 conforme o caso.

- Caso o n�mero de lados seja inferior a 3 escrever N�O � UM POL�GONO.

- Caso o n�mero de lados seja superior a 5 escrever POL�GONO N�O IDENTIFICADO.  */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int numlados, opcao;
	float medida[2];
	
	REPETIR:
		system("cls");
		cout << "Quantos lados tem o seu pol�gono? ";
		cin >> numlados;
		
		if (numlados > 5){
			cout << "Pol�gono n�o identificado. " << endl;
			system("pause");
			goto REPETIR;
		}
		else if (numlados == 5){
			cout << endl << "PENT�GONO" << endl << "Digite a medida, em cm, do lado do pent�gono abaixo: " << endl;
			cin >> medida[0];
			medida[1] = sqrt(pow(medida[0], 2) - pow((medida[0]/2), 2));
			cout << "A �rea desse pent�gono � de " << ((medida[0] * 5)/2) * medida[1]  << "cm�" << endl;
		}
		else if (numlados == 4){
			cout << endl << "QUADRADO" << endl << "Digite a medida, em cm, do lado do quadrado abaixo: " << endl;
			cin >> medida[0];
			cout << "A �rea desse quadrado � de " <<  pow(medida[0], 2) << "cm�" << endl;
		}
		else if (numlados == 3){
			cout << endl << "TRI�NGULO" << endl << "Digite a medida, em, do lado do tri�ngulo abaixo: " << endl;
			cin >> medida[0];
			cout << "A �rea desse tri�ngulo � de " << (pow(medida[0], 2) * sqrt(3))/4  << "cm�" << endl;
		}
		else{
			cout << "N�o � um pol�gono!" << endl;
			system("pause");
			goto REPETIR;
		}
		
		cout << endl << "Deseja calcular a �rea de outro pol�gono? (1-sim ou 0-n�o) :" << endl;
		cin >> opcao;
		
		if (opcao){
			goto REPETIR;
		}
		else{
			exit(0);
		}
	
	
	return 0;
}
