#include <iostream>
using namespace std;

/* Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12 Km por litro. Para obter o cálculo, o usuário deve 
fornecer o tempo gasto (TEMPO) e a velocidade média (VELOCIDADE) durante a viagem. Desta forma, será possível obter a distância percorrida com a fórmula 
DISTANCIA = TEMPO * VELOCIDADE. Possuindo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula 
LITROS_USADOS = DISTANCIA / 12. Ao final, o programa deve apresentar os valores da velocidade média (VELOCIDADE), tempo gasto na viagem (TEMPO), a distancia percorrida 
(DISTANCIA) e a quantidade de litros (LITROS_USADOS) utilizada na viagem */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float tempo, velocidade, distancia, litros_usados;
	
	cout << "Digite, em h, o tempo gasto na viagem:";
	cin >> tempo;
	
	cout << "Agora, digite a velocidade média que o veículo obteve durante a viagem:";
	cin >> velocidade;
	
	distancia = tempo * velocidade;
	litros_usados = distancia/12;
	
	cout << "\n- DADOS DA VIAGEM -  "<< endl <<"Duração: " << tempo << "h" << endl << "Velocidade média: " << velocidade 
	<< "km/h" << endl << "Distância percorrida: " << distancia << "km" << endl  << "Litros usados: " << litros_usados << endl << endl;
	
	system("pause");
	
	return 0;
}
