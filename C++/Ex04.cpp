#include <iostream>
using namespace std;

/* Efetuar o c�lculo e a apresenta��o do valor de uma presta��o em atraso, utilizando a f�rmula PRESTACAO = VALOR + (VALOR * TAXA/100) * TEMPO). */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float valor, taxa, tempo;
	
	cout << "Digite o valor da presta��o: R$";
	cin >> valor;
	
	cout << "Agora, digite a taxa (%) de juros: ";
	cin >> taxa;
	
	cout << "Por fim, digite o tempo, em dias, que a presta��o est� atrasada";
	cin >> tempo;
	
	cout << "\nO valor da presta��o com um atraso de " << tempo << " dias" << " � de R$" << valor + (valor * taxa/100) * tempo << endl << endl; 
	
	system("pause");
	
	return 0;
}
