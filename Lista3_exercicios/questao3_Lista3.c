/*
Joãozinho investiu Q reais
em uma aplicação com rendimento fixo de
R% ao mês. Pede-se a implementação de
um programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A
anos de investimento.
*/

#include<stdio.h>
void main()
{
	//Declaração de variaveis
	float Q,R;//Q=capital investido,R=taxa(% por mês)
	int A,M,i;// A: anos e m:meses
	
	//Ler variaveis
	printf("Digite o valor do capital investido(Q): ");
	scanf("%f",&Q);
	
	printf("Digite o rendimento fixo(R) ao mes(0-100): ");
	scanf("%f",&R);
	
	printf("Digite o periodo de tempo do investimento em anos(A): ");
	scanf("%d",&A);
	
	M=A*12;//Transformando anos em meses
	//Calculando o valor acumulado
	for(i=1;i<=M;i++)
	{
	   Q = Q +((R/100)*Q);	
	}
	
	
	printf("O valor disponivel na conta = R$ %.2f",Q);
	
}
