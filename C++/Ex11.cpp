/*
Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o n�mero lido como sendo um valor positivo, ou seja, o programa dever� apresentar o 
m�dulo de um n�mero fornecido. Lembre-se de verificar se o n�mero fornecido � menor que zero; sendo, multiplique-o por -1. */

#include <cstdlib> 
#include <iostream>

using namespace std;


int main () {   
	setlocale(LC_ALL, "Portuguese");
	
	int num, opcao;
	
	REPETIR:
		system("cls");
		cout << "Digite um n�mero inteiro: ";
		cin >> num;
		
		if(num < 0){
			num = num * -1;
		}
		
		cout << "O valor digitado em m�dulo � " << num << endl <<endl;
		cout << "Deseja digitar outro n�mero? (1-sim ou 0-n�o) :";
		cin >> opcao;
		
		if (opcao){
			goto REPETIR;
		}
		else{
			exit(0);
		}
		

    return 0;
}
