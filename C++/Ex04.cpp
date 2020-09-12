#include <iostream>
using namespace std;

/* Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula PRESTACAO = VALOR + (VALOR * TAXA/100) * TEMPO). */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float valor, taxa, tempo;
	
	cout << "Digite o valor da prestação: R$";
	cin >> valor;
	
	cout << "Agora, digite a taxa (%) de juros: ";
	cin >> taxa;
	
	cout << "Por fim, digite o tempo, em dias, que a prestação está atrasada";
	cin >> tempo;
	
	cout << "\nO valor da prestação com um atraso de " << tempo << " dias" << " é de R$" << valor + (valor * taxa/100) * tempo << endl << endl; 
	
	system("pause");
	
	return 0;
}
