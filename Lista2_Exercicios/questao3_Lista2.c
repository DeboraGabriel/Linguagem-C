/*
QUEST�O 3

As vendas parceladas se tornaram uma �tima op��o para os lojistas que, a cada dia, criam novas 
promo��es para tentar conquistar novos clientes. Fa�a um algoritmo que permita ao lojista informar 
o pre�o do produto e receber as seguintes informa��es:

a) O valor com 10% de desconto para pagamento � vista;
b) O valor da presta��o para parcelamento sem juros, em 5x;
c) O valor da presta��o para parcelamento com juros, em 10x, com 20% de acr�scimo no valor do produto.
*/

#include<stdio.h>

void main()
{
	//Declara��o de variaveis
	float preco,parcelaSemjuros,aVista,parcelaComjuros;
	
	//Leitura
	printf("Informe o pre�o do produto: ");
	scanf("%f",&preco);
	printf("\n");
	
	aVista=0.9*preco;
	parcelaSemjuros=preco/5;
	parcelaComjuros=(1.2*preco)/10;
	
	printf("O valor do produto a vista com desconto sera: %.2f",aVista);
	printf("\nO valor da pretacao para pagamento em 5x sera : %.2f",parcelaSemjuros);
	printf("\nO valor da prestacao para parcelamento com juros,em 10x sera: %.2f",parcelaComjuros);	
}
