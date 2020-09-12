#include <iostream>
using namespace std;

/* Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem, utilizando um autom�vel que faz 12 Km por litro. Para obter o c�lculo, o usu�rio deve 
fornecer o tempo gasto (TEMPO) e a velocidade m�dia (VELOCIDADE) durante a viagem. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula 
DISTANCIA = TEMPO * VELOCIDADE. Possuindo o valor da dist�ncia, basta calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula 
LITROS_USADOS = DISTANCIA / 12. Ao final, o programa deve apresentar os valores da velocidade m�dia (VELOCIDADE), tempo gasto na viagem (TEMPO), a distancia percorrida 
(DISTANCIA) e a quantidade de litros (LITROS_USADOS) utilizada na viagem */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float tempo, velocidade, distancia, litros_usados;
	
	cout << "Digite, em h, o tempo gasto na viagem:";
	cin >> tempo;
	
	cout << "Agora, digite a velocidade m�dia que o ve�culo obteve durante a viagem:";
	cin >> velocidade;
	
	distancia = tempo * velocidade;
	litros_usados = distancia/12;
	
	cout << "\n- DADOS DA VIAGEM -  "<< endl <<"Dura��o: " << tempo << "h" << endl << "Velocidade m�dia: " << velocidade 
	<< "km/h" << endl << "Dist�ncia percorrida: " << distancia << "km" << endl  << "Litros usados: " << litros_usados << endl << endl;
	
	system("pause");
	
	return 0;
}
