#include <iostream>
using namespace std;

/* Calcular e apresentar o valor do volume de uma lata de �leo, utilizando a f�rmula: Volume = pi * Raio� * Altura */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float raio, altura;
	const float pi = 3.14;
	
	cout << "Digite o Raio, em cm, da lata de �leo:";
	cin >> raio;
	
	cout << "Agora, digite, em cm, a altura da lata: ";
	cin >> altura;
	
	cout << "O volume da lata � de " << pi * (raio*raio) * altura << "cm�" << endl << endl;
	
	system("pause");
	
	return 0;
}
