#include <iostream>
using namespace std;

/* Calcule a Distância de um Raio com base na fórmula Distância = Tempo x 340 (340 = velocidade do som no ar em metros por segundo) */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, tempo;
	
	cout << "Digite o tempo, em segundos, do intervalo entre o raio e o trovão: ";
	cin >> tempo;
	
	distancia = tempo * 340;
	
	cout << "A distância que o raio estava de você é de " << distancia << "m" << endl;
	
	return 0;
}
