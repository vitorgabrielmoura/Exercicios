#include <stdio.h>
#include <stdlib.h>

/* O departamento que controla o �ndice de polui��o do meio ambiente mant�m 3 grupos de ind�strias que s�o altamente 
poluentes do meio ambiente. O �ndice de polui��o aceit�vel varia de 0,05 at� 0,25. Se o �ndice sobe para 0,3 as 
ind�strias do 1o grupo s�o intimadas a suspenderem suas atividades, se o �ndice cresce para 0,4 as do 1o e 2o grupo s�o intimadas a 
suspenderem suas atividades e se o �ndice atingir 0,5 todos os 3 grupos devem ser notificados a paralisarem suas atividades. 
Escrever um algoritmo que l� o �ndice de polui��o medido e emite a notifica��o adequada aos diferentes grupos de empresas */

int main ()
{	
	float indice; // declara a variavel a ser lida
	
	
	printf("Digite o indice de poluição:\n");
	scanf("%f", &indice); // lê o valor do usuário e atribui a variavel indice
	
	// condições de acordo com a resposta do usuário
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
		printf("Indice %.2f --> Aceitável!! :D");
	}
	else{
		printf("Desculpe. Esse nao eh um valor aceitavel.");
	}
return 0;
}
