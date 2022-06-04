/*
QUESTÃO 4
Desenvolva um algoritmo que calcule o consumo de combustivel de um automovel em determinada viagem. 
Para isso, devem ser obtidos: 
i) o percurso (em quilometros) da viagem; 
ii) o numero de quilometros que o carro percorre com um litro de combustivel (km/l); e 
iii) o preco do litro do combustivel.

Ao final, o algoritmo deve determinar:
A quantidade de combustivel, em litros,consumida durante a viagem;
O custo total de combustivel.
*/

#include<stdio.h>
void main()
{
	float percurso,numKm,preco;

	//Leitura de variavel
	printf("Informe o percurso em km da viagem: ");
	scanf("%f",&percurso);
	printf("\n");
	
	printf("Informe o numero de km que o carro percorre com um litro de combustivel(Km/l): ");
	scanf("%f",&numKm);
	printf("\n");
	
	printf("Informe o preco do litro do combustivel: ");
	scanf("%f",&preco);
	printf("\n");
	
	printf("A quantidade de combustivel em litros,consumida durante a viagem : %.1f",percurso/numKm);
	printf("\nO custo total de combustivel : R$ %.2f",(percurso/numKm)*preco);	
}
