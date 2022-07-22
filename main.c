// Local Funcitons
#include "functions.h"

int main ()
{
	int menu = 0, codCliente = 0;
	
	
	// Cadastrar Clientes
	
	printf("CADASTRAMENTO DE CLIENTES:");
	Spaces(3);
	
	CadClientes();
	
	Spaces(2);
	printf("CONFIRA OS CLIENTES CADASTRADOS:");
	Spaces(3);
	
	MostarClientes();
	Limpar();
	
	// Cadastrar Serviços
	
	printf("CADASTRAMENTO DE SERVIÇOS:");
	Spaces(3);
	
	CadTipoServico();
	
	Spaces(2);
	printf("CONFIRA OS SERVIÇOS CADASTRADOS:");
	Spaces(3);
	
	MostrarTiposServicos();	
	Limpar();
	
	// Cadastramento de Serviços Prestados
	
	printf("CADASTRE OS SERIVÇOS PRESTADOS:");
	Spaces(3);
	
	CadServicoPrestado();
	
	Spaces(2);
	printf("CONFIRA OS SERVIÇOS CADASTRADOS:");
	Spaces(3);
	
	MostrarServicosPrestados();	
	Limpar();
	
	// RODANDO O PROGRAMA
	
	// Menu: 
	// 1 = Calcular Valor Cliente
	// 2 = Média dos Valores
	// 3 = Valor por Serviço
	// 4 = Serviço maior Valor
	// 5 = Sair 
		
	do{
		system("cls");
		Spaces(3);
		
		printf("----------- MENU -----------\n");
		printf("|   1 - Consultar Cliente  |\n");
		printf("|   2 -  Média Gasto       |\n");
		printf("|   3 - Valor por Serviço  |\n");
		printf("|   4 - Serviço +Faturado  |\n");
		printf("|   5 - Sair               |\n");
		printf("----------------------------\n");
		printf("     Digite um valor: ");
		scanf("%d", &menu);	
		
		switch(menu)
		{
			case 1:
				system("cls");
				Spaces(3);
				
				// Inserir Código do CLiente
				printf("Digite o código do cliente: ");
				scanf("%d", &codCliente); 
				
				Spaces(2);
				printf("CONFIRA O RESULTADO:");
				Spaces(3);
				
				// Imprimir Valor
				printf("Cliente:  %d\n", codCliente); 
				printf("Valor gasto:  R$ %.2f", ConsultarValorCliente(codCliente)); 
				
				Limpar();				
				break;
				
			case 2:
				system("cls");
				
				Spaces(3);
				printf("CONFIRA O VALOR MÉDIO GASTO:");
				Spaces(3);
				
				// Imprimir Valor
				printf("Total de Clientes:  %d\n", TotalClientes()); 
				printf("Valor médio gasto:  R$ %.2f", MediaGastos()); 
				
				Limpar();	
				break;
				
			case 3:
				system("cls");
				
				Spaces(3);
				printf("VALOR FATURADO POR SERVIÇO PRESTADO:");
				Spaces(3);
				
				// Imprimir Valores por Serviços
				ValorFaturadoPorServico();
				
				Limpar();	
				break;
				
			case 4:
				system("cls");
				
				Spaces(3);
				printf("SERVIÇO COM MAIOR FATURAMENTO:");
				Spaces(3);
				
				// Imprimir Valores por Serviços
				ServicoMaisFaturado();
				
				Limpar();
				break;
				
			case 5:
				Limpar();
				exit(0);
				break;
		}		
		
	}while(menu != 5);
	
	return 0;
}
