/*
QUEST�O 5
O card�pio de uma lanchonete � o seguinte:

Especifica��o                   C�digo                 Pre�o
Cachorro quente                  100                   3,50
Bauru simples                    101                   4,50
Bauru com ovo                    102                   5,20
Hamburger                        103                   3,00
Cheeseburger                     104                   4,00
Refrigerante                     105                   2,50

Escrever um algoritmo que obtenha o c�digo do item pedido, a quantidade e calcule o valor a ser pago.
Considere que, a cada execu��o do algoritmo, somente ser� calculado o valor relacionado a um item.
*/

#include<stdio.h>
void main()
{
	//Declara��o de variaveis
	int codigo,qtd;
	float precoApagar;
	
	//Ler variaveis
	printf("Informe o codigo do item pedido:");
	scanf("%d",&codigo);
	printf("\n");
	
	printf("Informe a quantidade do item pedido:");
	scanf("%d",&qtd);
	printf("\n");
	
	switch(codigo)
	{
		case 100:precoApagar=qtd*3.50;
		         break;
		         
		case 101:precoApagar=qtd*4.50;
		         break;
		
		case 102:precoApagar=qtd*5.20;
		         break;
		         
		case 103:precoApagar=qtd*3.00;
		         break;
		         
		case 104:precoApagar=qtd*4.00;
		         break;
		         
		case 105:precoApagar=qtd*2.50;
		         break;
		
	}
	printf("O valor a ser pago pelo item %d sera R$ %.2f",codigo,precoApagar);	
}
