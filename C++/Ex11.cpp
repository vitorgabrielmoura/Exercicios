/*
Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o número lido como sendo um valor positivo, ou seja, o programa deverá apresentar o 
módulo de um número fornecido. Lembre-se de verificar se o número fornecido é menor que zero; sendo, multiplique-o por -1. */

#include <cstdlib> 
#include <iostream>

using namespace std;


int main () {   
	setlocale(LC_ALL, "Portuguese");
	
	int num, opcao;
	
	REPETIR:
		system("cls");
		cout << "Digite um número inteiro: ";
		cin >> num;
		
		if(num < 0){
			num = num * -1;
		}
		
		cout << "O valor digitado em módulo é " << num << endl <<endl;
		cout << "Deseja digitar outro número? (1-sim ou 0-não) :";
		cin >> opcao;
		
		if (opcao){
			goto REPETIR;
		}
		else{
			exit(0);
		}
		

    return 0;
}
