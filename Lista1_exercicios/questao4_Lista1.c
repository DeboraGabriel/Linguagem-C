/*
QUESTÃO 4
Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no
último ano. Faça um algoritmo que calcule o valor do crédito de acordo com a tabela abaixo.
  Saldo Médio                     Percentual
Inferior a R$ 1000,00          nenhum crédito
De R$ 1000,00 a R$ 1499,99     20% do saldo médio
De R$ 1500,00 a R$ 2499,99     30% do saldo médio
R$ 2500,00 ou mais             40% do saldo médio 
*/

#include<stdio.h>
void main()
{
	float saldo_Medio,credito;
	
	printf("Digite o seu saldo medio do ultimo ano: ");
	scanf("%f", &saldo_Medio);
	printf("\n");
	
	if(saldo_Medio<1000)
	{
		printf("Seu credito eh zero");
	}
	else
	{
		if(saldo_Medio<1500)
		{
			printf("Seu credito eh igual a %.2f",credito=saldo_Medio*0.2);
			
		}
		else
		{
			if(saldo_Medio<2500)
			{
					printf("Seu credito eh igual a %.2f",credito=saldo_Medio*0.3);
			}
			else
			{
					printf("Seu credito eh igual a %.2f",credito=saldo_Medio*0.4);
			}
		}
	}
}
