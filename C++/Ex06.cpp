#include <iostream>
using namespace std;

/* Calcule a �rea do Tri�ngulo com base na f�rmula �rea = Base x Altura / 2 */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, area;
	
	cout << "Digite a medida, em cm, da base de seu tri�ngulo: ";
	cin >> base;
	
	cout << "Agora, digite a medida, em cm, da altura de seu tri�ngulo: ";
	cin >> altura;
	
	area = (base * altura) / 2;
	
	cout << "A �rea do seu tri�ngulo � de " << area << "cm�" << endl;
	
	return 0;
}
