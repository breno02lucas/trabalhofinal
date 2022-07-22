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
	
	// Cadastrar Servi�os
	
	printf("CADASTRAMENTO DE SERVI�OS:");
	Spaces(3);
	
	CadTipoServico();
	
	Spaces(2);
	printf("CONFIRA OS SERVI�OS CADASTRADOS:");
	Spaces(3);
	
	MostrarTiposServicos();	
	Limpar();
	
	// Cadastramento de Servi�os Prestados
	
	printf("CADASTRE OS SERIV�OS PRESTADOS:");
	Spaces(3);
	
	CadServicoPrestado();
	
	Spaces(2);
	printf("CONFIRA OS SERVI�OS CADASTRADOS:");
	Spaces(3);
	
	MostrarServicosPrestados();	
	Limpar();
	
	// RODANDO O PROGRAMA
	
	// Menu: 
	// 1 = Calcular Valor Cliente
	// 2 = M�dia dos Valores
	// 3 = Valor por Servi�o
	// 4 = Servi�o maior Valor
	// 5 = Sair 
		
	do{
		system("cls");
		Spaces(3);
		
		printf("----------- MENU -----------\n");
		printf("|   1 - Consultar Cliente  |\n");
		printf("|   2 -  M�dia Gasto       |\n");
		printf("|   3 - Valor por Servi�o  |\n");
		printf("|   4 - Servi�o +Faturado  |\n");
		printf("|   5 - Sair               |\n");
		printf("----------------------------\n");
		printf("     Digite um valor: ");
		scanf("%d", &menu);	
		
		switch(menu)
		{
			case 1:
				system("cls");
				Spaces(3);
				
				// Inserir C�digo do CLiente
				printf("Digite o c�digo do cliente: ");
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
				printf("CONFIRA O VALOR M�DIO GASTO:");
				Spaces(3);
				
				// Imprimir Valor
				printf("Total de Clientes:  %d\n", TotalClientes()); 
				printf("Valor m�dio gasto:  R$ %.2f", MediaGastos()); 
				
				Limpar();	
				break;
				
			case 3:
				system("cls");
				
				Spaces(3);
				printf("VALOR FATURADO POR SERVI�O PRESTADO:");
				Spaces(3);
				
				// Imprimir Valores por Servi�os
				ValorFaturadoPorServico();
				
				Limpar();	
				break;
				
			case 4:
				system("cls");
				
				Spaces(3);
				printf("SERVI�O COM MAIOR FATURAMENTO:");
				Spaces(3);
				
				// Imprimir Valores por Servi�os
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
