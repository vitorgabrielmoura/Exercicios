#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main ()
{	
	float indice; // declara a variavel a ser lida
	
	
	printf("Digite o indice de polui��o:\n");
	scanf("%f", &indice); // l� o valor do usu�rio e atribui a variavel indice
	
	// condi��es de acordo com a resposta do usu�rio
	if (indice >= 0.5) {
		printf("Indice %.2f --> Todas as empresas dos 3 grupos devem suspender as atividades", indice);
	}
	else if (indice >= 0.4){
		printf("Indice %.2f --> Empresas do grupo 2 devem suspender as atividades.", indice);
	}
	else if (indice >= 0.3){
		printf("Indice %.2f --> Empresas do grupo 1 devem suspender as atividades", indice);
	}
	else if (indice >= 0.05 && indice <= 0.25){
		printf("Indice %.2f --> Aceit�vel!! :D");
	}
	else{
		printf("Desculpe. Esse nao eh um valor aceitavel.");
	}
return 0;
}
