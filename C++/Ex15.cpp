#include <iostream>
#include <cstdlib> 
using namespace std;

/* Escreva um programa para ler 3 valores inteiros e escrever o maior deles. Considere que o usu�rio n�o informar� valores iguais. */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int num[2], maior, opcao;
	
	REPETIR:
		system("cls");
		cout << "Digite abaixo 3 valores inteiros sem repeti-los: " << endl;
		cin >> num[0];
		cin >> num[1];
		cin >> num[2];
		
		maior = num[0];
		
		if (num[1] > maior){
			maior = num[1];
		}
		if (num[2] > maior){
			maior = num[2];
		}
		
		cout << endl << "O maior n�mero digitado foi " << maior << endl;
		
		
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
