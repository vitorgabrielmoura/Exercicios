#include <iostream>
#include <math.h>
using namespace std;

/* Calcule a �rea do Tri�ngulo com base na f�rmula �rea = Base x Altura / 2 */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	const float pi = 3.14;
	float diametro, raio, perimetro, area;
	
	cout << "Digite o perimetro: ";
	cin >> perimetro;
	
	diametro = perimetro / pi;
	raio = diametro / 2;
	area = pow(raio, 2) * pi;
	
	cout << "A �rea � vale " << area << endl;
	
	return 0;
}
