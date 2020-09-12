#include <iostream>
using namespace std;

/* Calcule a Área do Triângulo com base na fórmula Área = Base x Altura / 2 */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, area;
	
	cout << "Digite a medida, em cm, da base de seu triângulo: ";
	cin >> base;
	
	cout << "Agora, digite a medida, em cm, da altura de seu triângulo: ";
	cin >> altura;
	
	area = (base * altura) / 2;
	
	cout << "A Área do seu triângulo é de " << area << "cm²" << endl;
	
	return 0;
}
