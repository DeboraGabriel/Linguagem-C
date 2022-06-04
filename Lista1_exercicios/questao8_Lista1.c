/*
QUEST�O 7
Fa�a um algoritmo para calcular a conta final de um h�spede de um hotel, considerando que:
a) Devem ser obtidos o nome do h�spede, o tipo do apartamento utilizado (A, B, C ou D),
o n�mero de di�rias utilizadas pelo h�spede e o valor do consumo interno do h�spede;
b) O valor da di�ria � determinado pela seguinte tabela:
Tipo de Apartamento           Valor da di�ria
      A                         R$ 350,00
      B                         R$ 275,00
      C                         R$ 200,00
      D                         R$ 150,00
c) O valor da taxa de servi�o equivale a 10% da conta.
A conta a ser apresentada ao cliente deve conter: o nome do h�spede, o tipo do
apartamento, o valor total das di�rias, o valor do consumo interno, o subtotal, o valor da taxa de 
servi�o e o total geral.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	//Declara��o de variaveis
	char tipoAp;
	char nome[30];
	int diarias;
	float consumoInterno,contaTotal=0,dTotal,subTotal,taxaServico;
	
	//Leitura das variaveis
	
	printf("Digite o nome do hospede :");
	gets(nome);
	printf("\n");
	
	printf("Digite o tipo do apartamento utilizado :");
	tipoAp=toupper(tipoAp);//Garantir que s� tenha letra maiusculas.OBS:Testei com c minusculo mas n�o deu certo.Why?
	scanf("%c", &tipoAp);
	printf("\n");
	
	printf("Digite a quantidade de diarias :");
	scanf("%d",&diarias);
	printf("\n");
	
	printf("Digite o consumo interno do hospede :");
	scanf("%f",&consumoInterno);
	printf("\n");
	
	if(tipoAp=='A')
	{
		dTotal=350*diarias;
	}
	else
	{
		if(tipoAp=='B')
		{
			dTotal=275*diarias;
		}
		else
		{
			if(tipoAp=='C')
			{
				dTotal=200*diarias;
			}
			else
			{
				if (tipoAp=='D')
				{
					dTotal=150*diarias;
				}
			}
		}
		
	}
	subTotal=dTotal + consumoInterno;
	taxaServico=subTotal*0.1;
	contaTotal+=(subTotal + taxaServico);
		
	//Saida de dados pedida depois de todos os ifs e elses.
	printf("\nNome do cliente : %s",nome);
	printf("\nTipo de apartamento utilizado : %c",tipoAp);
	printf("\nO valor total das diarias : %.2f",dTotal);
	printf("\nO valor do consumo interno : %.2f",consumoInterno);
	printf("\nO valor do subtotal : %.2f",subTotal);
	printf("\nO valor da taxa de servico : %.2f",taxaServico);
	printf("\nO valor total da conta foi de : %.2f",contaTotal);
			
}
