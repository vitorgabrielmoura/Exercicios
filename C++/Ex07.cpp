#include <iostream>
using namespace std;

/* Calcule a Dist�ncia de um Raio com base na f�rmula Dist�ncia = Tempo x 340 (340 = velocidade do som no ar em metros por segundo) */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, tempo;
	
	cout << "Digite o tempo, em segundos, do intervalo entre o raio e o trov�o: ";
	cin >> tempo;
	
	distancia = tempo * 340;
	
	cout << "A dist�ncia que o raio estava de voc� � de " << distancia << "m" << endl;
	
	return 0;
}
