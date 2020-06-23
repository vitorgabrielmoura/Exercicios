#include <stdio.h>

void mostratabela(char tabela[][3]){
	int l, c;
	
	// itera sobre a tabela e mostra ela formatada
	printf("\n");
	for(l=0; l < 3; l++){
		for(c=0; c < 3; c++){
			printf(" %c ", tabela[l][c]);
		}
		printf("\n\n");
	}
};

int verificajogo(char tabela [][3], char jog){
	// verifica as linhas
	if (tabela[0][0] == jog && tabela[0][1] == jog && tabela[0][2] == jog){
		return 1;}		
	else if (tabela[1][0] == jog && tabela[1][1] == jog && tabela[1][2] == jog){
		return 1;}
	else if (tabela[2][0] == jog && tabela[2][1] == jog && tabela[2][2] == jog){
		return 1;}	
	
	// verifica as colunas
	if (tabela[0][0] == jog && tabela[1][0] == jog && tabela[2][0] == jog){
		return 1;}		
	else if (tabela[0][1] == jog && tabela[1][1] == jog && tabela[2][1] == jog){
		return 1;}
	else if (tabela[0][2] == jog && tabela[1][2] == jog && tabela[2][2] == jog){
		return 1;}
	
	// verifica as diagonais
	if (tabela[0][0] == jog && tabela[1][1] == jog && tabela[2][2] == jog){
		return 1;}
	else if (tabela[0][2] == jog && tabela[1][1] == jog && tabela[2][0] == jog){
		return 1;}
	
	return 0;
};

int main(int argc, char *argv[]) {
	int i,jog, coluna, linha, status1, status2, winner=1;
	char car, tabela[3][3] = {{'*', '*', '*'},
							  {'*', '*', '*'},
							  {'*', '*', '*'}
							  };
	
	// repete rodadas até algum dos dois jogadores vencer
	do{
		// limpa a tela do terminal
		system("cls");
		mostratabela(tabela);
		
		// seleciona qual jogador deverá jogar com base no contador i, que aumenta de 1 em 1 a cada rodada
		jog = 2;
		if (i % 2 == 0)
			jog = 1;
			
		printf("\nVez do jogador %d\nLinha: ", jog);
		scanf("%d", &linha);
		printf("Coluna: ");
		scanf("%d", &coluna);
		
		// seleciona o caracter de acordo com o jogador da rodada
		car = 'X';
		if (jog == 2)
			car = 'O';
		
		/* preenche a tabela se não houver nada na posição selecionada pelo usuário, caso tenha, 
		o jogo irá contar +2 no i fazendo o mesmo jogador ter a chance de jogar até preencher corretamente*/
		if (tabela[linha][coluna] == '*'){
			tabela[linha][coluna] = car;
		}
		else{
			i++;
		}
		
		// verifica se algum dos dois jogadores venceu
		status1 = verificajogo(tabela, 'X');
		status2 = verificajogo(tabela, 'O');
		
		// incremento básico para ver quem é o jogador da vez
		i++;
	} while (status1 == 0 && status2 == 0);
	
	system("cls");
	mostratabela(tabela);
	if (status2 == 1){
		winner = 2;
	}
	printf("\nJOGADOR %d VENCEU!!", winner);

	return 0;
}

