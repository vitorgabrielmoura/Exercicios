/*
Efetuar a leitura de tr�s valores (vari�veis A, B e C) e efetuar o c�lculo da equa��o completa de segundo grau, apresentando as duas ra�zes, se para os valores informados 
for poss�vel efetuar o referido c�lculo. Lembre-se de que a vari�vel A deve ser diferente de zero. */

#include <cstdlib> 
#include <iostream>
#import <math.h>

using namespace std;


int main () {   
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, C, delta, x1, x2, opcao;
	
	REPETIR:
		system("cls");
		cout << "Digite os 3 valores, na ordem, para a efetuar o c�lculo da equa��o de 2� grau: \n";
		cin >> A;
		if (A == 0){
			cout << "O A n�o pode ser 0!";
			system("pause");
			goto REPETIR;
		}
		cin >> B;
		cin >> C;
		
		delta = pow(B, 2) - (4 * A * C);
		x1 = (-B + sqrt(delta)) / (2*A);
		x2 = -B - sqrt(delta) / (2*A);
		
		if (not isnan(x1) and not isnan(x2)){
			cout << "\nx� = " << x1 << endl << "x� = " << x2 << endl << endl;
		}
		else{
			cout << "\nN�o foi poss�vel calcular as ra�zes dessa equa��o! " << endl << endl;
		}
		
		cout << "Deseja efetuar a equa��o com outros n�meros? (1-sim ou 0-n�o) :";
		cin >> opcao;
		
		if (opcao){
			goto REPETIR;
		}
		else{
			exit(0);
		}
		
    return 0;
}
