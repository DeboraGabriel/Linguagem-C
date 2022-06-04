/*
QUESTÃO 7
Faça um algoritmo para calcular a conta final de um hóspede de um hotel, considerando que:
a) Devem ser obtidos o nome do hóspede, o tipo do apartamento utilizado (A, B, C ou D),
o número de diárias utilizadas pelo hóspede e o valor do consumo interno do hóspede;
b) O valor da diária é determinado pela seguinte tabela:
Tipo de Apartamento           Valor da diária
      A                         R$ 350,00
      B                         R$ 275,00
      C                         R$ 200,00
      D                         R$ 150,00
c) O valor da taxa de serviço equivale a 10% da conta.
A conta a ser apresentada ao cliente deve conter: o nome do hóspede, o tipo do
apartamento, o valor total das diárias, o valor do consumo interno, o subtotal, o valor da taxa de 
serviço e o total geral.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	//Declaração de variaveis
	char tipoAp;
	char nome[30];
	int diarias;
	float consumoInterno,contaTotal=0,dTotal,subTotal,taxaServico;
	
	//Leitura das variaveis
	
	printf("Digite o nome do hospede :");
	gets(nome);
	printf("\n");
	
	printf("Digite o tipo do apartamento utilizado :");
	tipoAp=toupper(tipoAp);//Garantir que só tenha letra maiusculas.OBS:Testei com c minusculo mas não deu certo.Why?
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
