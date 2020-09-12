#include <iostream>
using namespace std;

/* Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
conversão é F = (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float cel;
	
	cout << "Digite a temperatura em Graus Celsius:";
	cin >> cel;
	
	cout << "A temperatura em Fahrenheit é de " << (9 * cel + 160) / 5 << endl;
	
	system("pause");
	
	return 0;
}
