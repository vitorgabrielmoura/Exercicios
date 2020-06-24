#include <stdio.h>
#include <stdlib.h>

/* O departamento que controla o Ìndice de poluiÁ„o do meio ambiente mantÈm 3 grupos de ind˙strias que s„o altamente 
poluentes do meio ambiente. O Ìndice de poluiÁ„o aceit·vel varia de 0,05 atÈ 0,25. Se o Ìndice sobe para 0,3 as 
ind˙strias do 1o grupo s„o intimadas a suspenderem suas atividades, se o Ìndice cresce para 0,4 as do 1o e 2o grupo s„o intimadas a 
suspenderem suas atividades e se o Ìndice atingir 0,5 todos os 3 grupos devem ser notificados a paralisarem suas atividades. 
Escrever um algoritmo que lÍ o Ìndice de poluiÁ„o medido e emite a notificaÁ„o adequada aos diferentes grupos de empresas */

int main ()
{	
	float indice; // declara a variavel a ser lida
	
	
	printf("Digite o indice de polui√ß√£o:\n");
	scanf("%f", &indice); // l√™ o valor do usu√°rio e atribui a variavel indice
	
	// condi√ß√µes de acordo com a resposta do usu√°rio
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
		printf("Indice %.2f --> Aceit√°vel!! :D");
	}
	else{
		printf("Desculpe. Esse nao eh um valor aceitavel.");
	}
return 0;
}
