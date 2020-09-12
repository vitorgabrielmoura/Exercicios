#include <iostream>
#include <math.h>
using namespace std;

/* Nos exercícios C e D, crie o quadro resumo, algoritmo descritivo e o código fonte com base nos diagramas de blocos*/

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	const float G = 9.8;
	float altura, TQ;
	
	cout << "Digite a altura: ";
	cin >> altura;
	
	TQ = sqrt(2 * altura) / G;
	
	cout << "O TQ vale " << TQ << endl;
	
	return 0;
}
