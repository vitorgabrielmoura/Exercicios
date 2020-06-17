#include <stdio.h>
#include <stdlib.h>

struct tp_endereco{
	char rua[40], bairro[40], cidade[40], estado[3];
	int numero, cep;
};

struct tp_data_nascimento{
	int dia, mes, ano;
};

struct cadastro_cliente{
	char nome_cliente[40];
	int telefone;
	
	struct tp_endereco endereco;
	struct tp_data_nascimento data_nascimento;
};


int main(int argc, char *argv[]) {
	struct cadastro_cliente cad_cliente[2];
	int i;
	
	printf("\n\n-------- Cadastro dos clientes ---------\n\n");
	for(i=0; i < 2; i++){
		printf("\n\nNome do cliente n %d: ", i+1);
		fflush(stdin);
		gets(cad_cliente[i].nome_cliente);
		
		printf("Telefone: ");
		fflush(stdin);
		scanf("%d", cad_cliente[i].telefone);
		
		printf("Rua: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.rua);
		
		printf("Numero da residencia: ");
		fflush(stdin);
		scanf("%d", &cad_cliente[i].endereco.numero);
		
		printf("Bairro: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.bairro);
		
		printf("Cidade: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.cidade);
		
		printf("Estado: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.estado);
		
		printf("CEP: ");
		fflush(stdin);
		scanf("%d", &cad_cliente[i].endereco.cep);
		
		printf("Dia de nascimento: ");
		fflush(stdin);
		scanf("%d", &cad_cliente[i].data_nascimento.dia);
		
		printf("Mes de nascimento: ");
		fflush(stdin);
		scanf("%d", &cad_cliente[i].data_nascimento.mes);
		
		printf("Ano de nascimento: ");
		fflush(stdin);
		scanf("%d", &cad_cliente[i].data_nascimento.ano);
	}
	
	for(i=0; i< 2; i++){
		printf("\n\nNome...... %s", cad_cliente[i].nome_cliente);
		printf("\nTelefone...... %d", cad_cliente[i].telefone);
		printf("\nEndereco...... %s n %d, %s, %s - %s", cad_cliente[i].endereco.rua, cad_cliente[i].endereco.numero,
		cad_cliente[i].endereco.bairro, cad_cliente[i].endereco.cidade, cad_cliente[i].endereco.estado);
		printf("\nData de nascimento...... %d/%d/%d", cad_cliente[i].data_nascimento.dia, cad_cliente[i].data_nascimento.mes,
		cad_cliente[i].data_nascimento.ano);
		
	}
	return 0;
}
