/*
Ler dois valores num�ricos inteiros e apresentar o resultado da diferen�a do maior pelo menor valor.
 */

#include <cstdlib> 
#include <iostream>

using namespace std;


int main () {   
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, resultado, opcao;
	
	REPETIR:
		system("cls");
		cout << "Digite o primeiro n�mero inteiro: ";
		cin >> num1;
		cout << "Digite o segundo n�mero inteiro: ";
		cin >> num2;
		
		resultado = num1 - num2;
		if (resultado < 0)
			resultado = resultado * -1;
		
		system("cls");
		cout << "O resultado da diferen�a do maior pelo menor � de " << resultado << endl << endl;
		cout << "Deseja inserir novos n�meros? (0-Sim ou 1-N�o): ";
		cin >> opcao;
		
		if (opcao == 0){
			goto REPETIR;
		}
		else{
			exit(0);
		}
		
		

    return 0;
}
