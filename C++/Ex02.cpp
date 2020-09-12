#include <iostream>
using namespace std;

/* Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula: Volume = pi * Raio² * Altura */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float raio, altura;
	const float pi = 3.14;
	
	cout << "Digite o Raio, em cm, da lata de óleo:";
	cin >> raio;
	
	cout << "Agora, digite, em cm, a altura da lata: ";
	cin >> altura;
	
	cout << "O volume da lata é de " << pi * (raio*raio) * altura << "cm³" << endl << endl;
	
	system("pause");
	
	return 0;
}
