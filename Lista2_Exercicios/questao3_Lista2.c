/*
QUESTÃO 3

As vendas parceladas se tornaram uma ótima opção para os lojistas que, a cada dia, criam novas 
promoções para tentar conquistar novos clientes. Faça um algoritmo que permita ao lojista informar 
o preço do produto e receber as seguintes informações:

a) O valor com 10% de desconto para pagamento à vista;
b) O valor da prestação para parcelamento sem juros, em 5x;
c) O valor da prestação para parcelamento com juros, em 10x, com 20% de acréscimo no valor do produto.
*/

#include<stdio.h>

void main()
{
	//Declaração de variaveis
	float preco,parcelaSemjuros,aVista,parcelaComjuros;
	
	//Leitura
	printf("Informe o preço do produto: ");
	scanf("%f",&preco);
	printf("\n");
	
	aVista=0.9*preco;
	parcelaSemjuros=preco/5;
	parcelaComjuros=(1.2*preco)/10;
	
	printf("O valor do produto a vista com desconto sera: %.2f",aVista);
	printf("\nO valor da pretacao para pagamento em 5x sera : %.2f",parcelaSemjuros);
	printf("\nO valor da prestacao para parcelamento com juros,em 10x sera: %.2f",parcelaComjuros);	
}
