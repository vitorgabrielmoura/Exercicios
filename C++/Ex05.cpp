#include <iostream>
using namespace std;

/* Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula VOLUME =  COMPRIMENTO * LARGURA * ALTURA. */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float comprimento, largura, altura;
	
	cout << "Digite, em cm, o comprimento da caixa: ";
	cin >> comprimento;
	
	cout << "Agora, em cm, a largura da caixa: ";
	cin >> largura;
	
	cout << "Por fim, em cm, a altura da caixa:";
	cin >> altura;
	
	cout << "\nO volume da caixa é de " << comprimento * largura *  altura << " cm³" << endl << endl; 
	
	system("pause");
	
	return 0;
}
