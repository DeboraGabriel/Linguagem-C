/*
Questão 1
O IMC (Indice de Massa Corporal) e um criterio da Organizacao Mundial de Saudepara dar uma 
indicacao sobre a condicao de peso de uma pessoa adulta. A formula e:
IMC = peso / altura2

Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condicao de acordo 
com a tabela abaixo:
IMC em adultos             Condicao
IMC < 18,5              Abaixo do peso
18,5<= IMC < 25,0        Peso ideal
25,0<=IMC < 30,0          Sobrepeso
30,0<=IMC < 35,0        Obesidade grau I
35,0<=IMC < 40,0        Obesidade grau II
IMC>=40,0               Obesidade grau III
*/

#include<stdio.h>
void main()
{
	//Declaração de variaveis
	float imc,altura,peso;
	
	//Leitura das variaveis
	printf("Digite seu peso :");
	scanf("%f",&peso);
	printf("\n");
	
	printf("Digite sua altura :");
	scanf("%f",&altura);
	printf("\n");
	
	imc=(peso/(altura*altura));
	
	if(imc<18.5)
	{
		printf("Abaixo do peso.");
		printf("\nSeu IMC foi de %.1f",imc);//Coloquei um dado a mais para ser exibido.Não foi pedido pelo exercicio.
	}
	else
	{
		if(imc<25.0)
		{
			printf("Peso ideal.");
			printf("\nSeu IMC foi de %.1f",imc);//Coloquei um dado a mais para ser exibido.Não foi pedido pelo exercicio.
		}
		else
		{
			if(imc<30.0)
			{
				printf("Sobrepeso.");
				printf("\nSeu IMC foi de %.1f",imc);//Coloquei um dado a mais para ser exibido.Não foi pedido pelo exercicio.
			}
			else
			{
				if(imc<35.0)
				{
					printf("Obesidade Grau I.");
					printf("\nSeu IMC foi de %.1f",imc);//Coloquei um dado a mais para ser exibido.Não foi pedido pelo exercicio.
				}
				else
				{
					if(imc<40.0)
					{
						printf("Obesidade Grau II.");
						printf("\nSeu IMC foi de %.1f",imc);//Coloquei um dado a mais para ser exibido.Não foi pedido pelo exercicio.
					}
					else
					{
						if(imc>=40.0)
						{
							printf("Obesidade Grau III.");
							printf("\nSeu IMC foi de %.1f",imc);//Coloquei um dado a mais para ser exibido.Não foi pedido pelo exercicio.
						}
					}
				}
			}
		}
	}
	
	
	
	
}

