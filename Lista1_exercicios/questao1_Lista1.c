/*
QUESTÃO 1
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao custo de fábrica).Desenvolver um algoritmo
que calcule o custo ao consumidor de determinado carro.*/

#include<stdio.h>

void main()
{
	float custo_Fabrica,P,custo_Consumidor;
	
	printf("Entre com o custo de fabrica: ");
	scanf("%f", &custo_Fabrica);
	printf("Entre com o valor da porcentagem: ");
	scanf("%f", &P);
	
	custo_Consumidor = (custo_Fabrica*P)/100 + custo_Fabrica;
	printf("\n");
	printf("O custo ao consumidor foi de %.3f ",custo_Consumidor);
}
