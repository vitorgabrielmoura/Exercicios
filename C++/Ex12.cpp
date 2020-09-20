/*
Efetuar a leitura de três valores (variáveis A, B e C) e efetuar o cálculo da equação completa de segundo grau, apresentando as duas raízes, se para os valores informados 
for possível efetuar o referido cálculo. Lembre-se de que a variável A deve ser diferente de zero. */

#include <cstdlib> 
#include <iostream>
#import <math.h>

using namespace std;


int main () {   
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, C, delta, x1, x2, opcao;
	
	REPETIR:
		system("cls");
		cout << "Digite os 3 valores, na ordem, para a efetuar o cálculo da equação de 2º grau: \n";
		cin >> A;
		if (A == 0){
			cout << "O A não pode ser 0!";
			system("pause");
			goto REPETIR;
		}
		cin >> B;
		cin >> C;
		
		delta = pow(B, 2) - (4 * A * C);
		x1 = (-B + sqrt(delta)) / (2*A);
		x2 = -B - sqrt(delta) / (2*A);
		
		if (not isnan(x1) and not isnan(x2)){
			cout << "\nx¹ = " << x1 << endl << "x² = " << x2 << endl << endl;
		}
		else{
			cout << "\nNão foi possível calcular as raízes dessa equação! " << endl << endl;
		}
		
		cout << "Deseja efetuar a equação com outros números? (1-sim ou 0-não) :";
		cin >> opcao;
		
		if (opcao){
			goto REPETIR;
		}
		else{
			exit(0);
		}
		
    return 0;
}
