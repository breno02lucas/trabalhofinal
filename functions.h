// ---> Libs
#include "includes.h"

// ---> CLIENTE VECTOR FUNC

// Mostrar Clientes
void MostarClientes()
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		if(clientes[i] != 0)
			printf("| Cliente: %.0f |\n", clientes[i]);
	}
}

// Cadastrar Clientes
void CadClientes()
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Digite o c�digo do cliente: ");
		scanf("%f", &clientes[i]);
		
		// Se o c�digo dititado for -1, pare de cadastrar.
		if(clientes[i] == -1)
		{
			clientes[i] = 0;
			break;
		}
	}
}





// ---> TIPOS DE SERVI�OS VECTOR FUNC

// Cadastrar Tipos de Servi�os
void CadTipoServico()
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Digite o c�digo do Servi�o: ");
		scanf("%f", &tiposervico[i]);
		
		// Se o c�digo dititado for -1, pare de cadastrar.
		if(tiposervico[i] == -1)
		{
			tiposervico[i] = 0;
			break;
		}
	}
}

// Mostar os Servi�os Dispon�veis
void MostrarTiposServicos()
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		if(tiposervico[i] != 0)
			printf("| Tipos de Servi�os: %.0f |\n", tiposervico[i]);
	}
}





// ---> CADASTRAMENTO DE SERVI�OS PRESTADOS

// Cadastrar Servi�os
void CadServicoPrestado()
{
	int i, j;
	
	for(i = 0; i < 30; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(j == 0)
			{
				printf("Insira o C�digo do Cliente: ");
				scanf("%f", &servicos[i][j]);
				
				if(servicos[i][j] == -1)
				{
					break;
				}
			}
			else if(j == 1)
			{
				printf("Insira o C�digo do Servi�o: ");
				scanf("%f", &servicos[i][j]);
			}
			else if(j == 2)
			{
				printf("Insira o Valor do Servi�o: ");
				scanf("%f", &servicos[i][j]);
			}
		}
		
		if(servicos[i][j] == -1)
		{
			servicos[i][j] = 0;
			break;
		}
		
		printf("\n ------------------ \n\n");
	}
}

void MostrarServicosPrestados()
{
	int i, j;
	
	for(i = 0; i < 30; i++)
	{				
		for(j = 0; j < 3; j++)
		{
			if(servicos[i][0] != 0)
			{				
				if(j == 0)
				{					
					printf("\n --------- %d --------- \n\n", i + 1);	
					printf("Cliente: %.0f\n", servicos[i][j]);
				}
				else if(j == 1)
				{
					printf("C�digo do Servi�o Prestado: %.0f\n", servicos[i][j]);
				}
				else if(j == 2)
				{
					printf("Valor do Servi�o Prestado: R$ %.2f\n", servicos[i][j]);
				}	
			}
		}	
	}
	
}





// ---> FUN��ES DADAS PELO TRABALHOS
int TotalClientes()
{
	int i, custommers = 0;
	
	for(i = 0; i < 10; i++)
	{
		if(clientes[i] != 0)
			custommers++;
	}
	
	return custommers;
}

// Consultar Clientes
float ConsultarValorCliente(int cod)
{	
	int i, j;
	float valorTotal = 0;
	
	// Consultar na Matriz
	for(i = 0; i < 30; i++)
	{
		if(servicos[i][0] == cod)
			valorTotal += servicos[i][2];		
	}
	
	return valorTotal;
}

// M�dia de gastos dos Clientes
float MediaGastos()
{	
	int i, j, custommers = 0;
	float valorTotal = 0;
	
	// Consultar na Matriz
	for(i = 0; i < 30; i++)
	{
		if(servicos[i][0] != 0)
		{
			valorTotal += servicos[i][2];
		}
				
	}
	
	return valorTotal/TotalClientes();
}

// Valor faturado por cada servi�o
void ValorFaturadoPorServico()
{
	int i, j;
	float valorTotal = 0;
	
	// Pegar os Tipos de Servi�os e verificar com os servi�os prestados
	for(i = 0; i < 10; i++)
	{
		if(tiposervico[i] != 0)
		{
			printf("Tipo de servi�o: %.0f\n", tiposervico[i]);
			
			valorTotal = 0;
			for(j = 0; j < 30; j++)
			{			
				if(tiposervico[i] == servicos[j][1])
				{
					valorTotal += servicos[i][2];
				}
			}	
			
			printf("Total faturado: R$ %.2f\n", valorTotal);
			printf("---------------------\n");
		}
	}
}

// Servi�o com maior Faturamento
void ServicoMaisFaturado()
{
	int i, j, servico;
	float maiorValor = 0, valorTotal = 0;
	
	maiorValor = servicos[0][2];
	servico = servicos[0][1];
	
	for(i = 0; i < 10; i++)
	{
		if(tiposervico[i] != 0)
		{	
			valorTotal = 0;
			 
			for(j = 0; j < 30; j++)
			{			
				if(tiposervico[i] == servicos[j][1])
				{
					valorTotal += servicos[i][2];
				}
			}	
			
			if(valorTotal > maiorValor)
			{
				maiorValor = valorTotal;
				servico = tiposervico[i];
			}
		}
	}
	
	printf("Servi�o com maior faturamento: %d\n", servico);
	printf("Total faturado: %.2f\n", maiorValor);	
}





// ---> DETAILS FUNCTIONS

// Quebra de Linha
void Spaces(int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\n");
	}
}

// Limpar tela
void Limpar()
{
	Spaces(2);
	system("pause");
	system("cls");
}











