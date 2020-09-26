#include <iostream>
#include <math.h>
#include <cstdlib> 
using namespace std;

/* 1. Escreva um programa para ler o número de lados de um polígono regular e a medida do lado (em cm). 

- Se o número de lados for igual a 3 imprima “TRIÂNGULO”, calcule e mostre a área do triângulo 

- Se o número de lados for igual a 4 imprima “QUADRADO”, calcule  e mostre a área do quadrado. 

- Se o número de lados for igual a 5 imprime  “PENTÁGONO”, calcule e mostre a área do pentágono. 

Acrescente as seguintes mensagens ao exercício 1 conforme o caso.

- Caso o número de lados seja inferior a 3 escrever NÃO É UM POLÍGONO.

- Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.  */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int numlados, opcao;
	float medida[2];
	
	REPETIR:
		system("cls");
		cout << "Quantos lados tem o seu polígono? ";
		cin >> numlados;
		
		if (numlados > 5){
			cout << "Polígono não identificado. " << endl;
			system("pause");
			goto REPETIR;
		}
		else if (numlados == 5){
			cout << endl << "PENTÁGONO" << endl << "Digite a medida, em cm, do lado do pentágono abaixo: " << endl;
			cin >> medida[0];
			medida[1] = sqrt(pow(medida[0], 2) - pow((medida[0]/2), 2));
			cout << "A área desse pentágono é de " << ((medida[0] * 5)/2) * medida[1]  << "cm²" << endl;
		}
		else if (numlados == 4){
			cout << endl << "QUADRADO" << endl << "Digite a medida, em cm, do lado do quadrado abaixo: " << endl;
			cin >> medida[0];
			cout << "A área desse quadrado é de " <<  pow(medida[0], 2) << "cm²" << endl;
		}
		else if (numlados == 3){
			cout << endl << "TRIÂNGULO" << endl << "Digite a medida, em, do lado do triângulo abaixo: " << endl;
			cin >> medida[0];
			cout << "A área desse triângulo é de " << (pow(medida[0], 2) * sqrt(3))/4  << "cm²" << endl;
		}
		else{
			cout << "Não é um polígono!" << endl;
			system("pause");
			goto REPETIR;
		}
		
		cout << endl << "Deseja calcular a área de outro polígono? (1-sim ou 0-não) :" << endl;
		cin >> opcao;
		
		if (opcao){
			goto REPETIR;
		}
		else{
			exit(0);
		}
	
	
	return 0;
}
