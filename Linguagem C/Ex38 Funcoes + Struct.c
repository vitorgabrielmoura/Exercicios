#include <stdio.h>
#include <conio.h>

/* Fa�a uma fun��o que recebe, por par�metros, a hora de inicio e a hora de t�rmino de um jogo, ambas subdivididas em 2 valores distintos: 
horas e minutos. A fun��o deve retornar adura��o do jogo em minutos, considerando que o tempo m�ximo de dura��o de um jogo � de 24 horas e que o 
jogo pode come�ar em um dia e terminar no outro. */

typedef struct{
	int horas, minutos;	
}dados;

int duracao(dados inicio, dados fim){
	int horas, minutos, teste, h1, h2;
	
	minutos = fim.minutos - inicio.minutos;
	if (minutos < 0){
		minutos = minutos * -1;
	}
	
	horas = fim.horas - inicio.horas;
	if (horas < 0){
		h1 = 24 - inicio.horas;
		h2 = 24 - (24 - fim.horas);
		horas = h1 + h2;
	}
	
	return ((horas*60) + minutos);
}


int main(int argc, char *argv[]) {
	dados jogoinicio;
	dados jogofim;
	int minutos;
	
	jogoinicio.horas = 20; // come�ou as 20h e 30min
	jogoinicio.minutos = 30;
	
	jogofim.horas = 19; // terminou s� as 19h do dia seguinte
	jogofim.minutos = 25;
	
	minutos = duracao(jogoinicio, jogofim);
	printf("A partida durou %d minutos", minutos);
	
	return 0;
}
