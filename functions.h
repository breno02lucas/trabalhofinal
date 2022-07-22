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
		printf("Digite o código do cliente: ");
		scanf("%f", &clientes[i]);
		
		// Se o código dititado for -1, pare de cadastrar.
		if(clientes[i] == -1)
		{
			clientes[i] = 0;
			break;
		}
	}
}





// ---> TIPOS DE SERVIÇOS VECTOR FUNC

// Cadastrar Tipos de Serviços
void CadTipoServico()
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Digite o código do Serviço: ");
		scanf("%f", &tiposervico[i]);
		
		// Se o código dititado for -1, pare de cadastrar.
		if(tiposervico[i] == -1)
		{
			tiposervico[i] = 0;
			break;
		}
	}
}

// Mostar os Serviços Disponíveis
void MostrarTiposServicos()
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		if(tiposervico[i] != 0)
			printf("| Tipos de Serviços: %.0f |\n", tiposervico[i]);
	}
}





// ---> CADASTRAMENTO DE SERVIÇOS PRESTADOS

// Cadastrar Serviços
void CadServicoPrestado()
{
	int i, j;
	
	for(i = 0; i < 30; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(j == 0)
			{
				printf("Insira o Código do Cliente: ");
				scanf("%f", &servicos[i][j]);
				
				if(servicos[i][j] == -1)
				{
					break;
				}
			}
			else if(j == 1)
			{
				printf("Insira o Código do Serviço: ");
				scanf("%f", &servicos[i][j]);
			}
			else if(j == 2)
			{
				printf("Insira o Valor do Serviço: ");
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
					printf("Código do Serviço Prestado: %.0f\n", servicos[i][j]);
				}
				else if(j == 2)
				{
					printf("Valor do Serviço Prestado: R$ %.2f\n", servicos[i][j]);
				}	
			}
		}	
	}
	
}





// ---> FUNÇÕES DADAS PELO TRABALHOS
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

// Média de gastos dos Clientes
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

// Valor faturado por cada serviço
void ValorFaturadoPorServico()
{
	int i, j;
	float valorTotal = 0;
	
	// Pegar os Tipos de Serviços e verificar com os serviços prestados
	for(i = 0; i < 10; i++)
	{
		if(tiposervico[i] != 0)
		{
			printf("Tipo de serviço: %.0f\n", tiposervico[i]);
			
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

// Serviço com maior Faturamento
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
	
	printf("Serviço com maior faturamento: %d\n", servico);
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











