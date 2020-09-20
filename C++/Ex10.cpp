/*
Ler dois valores numéricos inteiros e apresentar o resultado da diferença do maior pelo menor valor.
 */

#include <cstdlib> 
#include <iostream>

using namespace std;


int main () {   
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, resultado, opcao;
	
	REPETIR:
		system("cls");
		cout << "Digite o primeiro número inteiro: ";
		cin >> num1;
		cout << "Digite o segundo número inteiro: ";
		cin >> num2;
		
		resultado = num1 - num2;
		if (resultado < 0)
			resultado = resultado * -1;
		
		system("cls");
		cout << "O resultado da diferença do maior pelo menor é de " << resultado << endl << endl;
		cout << "Deseja inserir novos números? (0-Sim ou 1-Não): ";
		cin >> opcao;
		
		if (opcao == 0){
			goto REPETIR;
		}
		else{
			exit(0);
		}
		
		

    return 0;
}
