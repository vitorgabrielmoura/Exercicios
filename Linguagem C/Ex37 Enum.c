#include <stdio.h>
#include <conio.h>

/* Fazer uma função que recebe um mês e um ano como parâmetros e retorna o número de dias daquele mês daquele ano. Dica: um ano é bissexto 
quando é múltiplo de 4 e não múltiplo de 100, ou também quando é múltiplo de 400. */

typedef enum{
	Janeiro=31, Fevereiro=28, Marco=31, Abril=30, Maio=31, Junho=30, Julho=31, Agosto=31, Setembro=30,
	Outubro=31, Novembro=30, Dezembro=31}meses;
	
int qntdias(meses mes, int ano){
	int dias;
	
	dias = mes;
	
	if(ano%4 == 0 && ano%100 != 0 || ano%400 == 0){
		if (mes == Fevereiro){
			dias = 29;
		}
	}
	return (dias);
}

int main(int argc, char *argv[]) {
	int ano, res;
	
	res = qntdias(Fevereiro, 1996);
	
	printf("%d dias", res);
	
	return 0;
}

