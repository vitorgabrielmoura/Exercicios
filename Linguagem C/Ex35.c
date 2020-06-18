#include <stdio.h>
#include <conio.h>

/* Crie um algoritimo que leia um numero inteiro e diga qual dia da semana ele se refere */

enum semana{Domingo=1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado}; // basta colocar o 1 que ele incrementa automaticamente o resto

int main(int argc, char *argv[]) {
	
	enum semana sem;
	
	printf("Digite um numero inteiro de 1 a 7: ");
	scanf("%d", &sem);
	
	if(sem>=Domingo && sem <= Sabado){
		switch(sem){
		case Domingo: printf("%d - Domingo", sem);break;
		case Segunda: printf("%d - Segunda", sem);break;
		case Terca: printf("%d - Terca", sem);break;
		case Quarta: printf("%d - Quarta", sem);break;
		case Quinta: printf("%d - Quinta", sem);break;
		case Sexta: printf("%d - Sexta", sem);break;
		case Sabado: printf("%d - Sabado", sem);break;
		}		
	}
	else{
		printf("Valor inválido! Digite um numero de 1 a 7");
	}
	
	return 0;
}
