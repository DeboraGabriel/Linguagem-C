/*
Fa�a um programa que leia 300 n�meros reais. Ao final, devem ser exibidas as seguintes informa��es:
a) A quantidade de valores negativos digitados;
b) A m�dia dos valores positivos.
*/

#include<stdio.h>

#define QUANT 5//O exerc�cio pediu 300 valores mas testei com 5 valores

void main()
{
	//Declara��o de variaveis
	float n,somaPos=0,mediaPos;
	int qtdNeg=0,qtdPos=0,i;
	
	//Leitura das vari�veis de entrada
	for(i=1;i<=QUANT;i++)
	{
		printf("Informe um numero real:\n");
		scanf("%f",&n);
		
		if(n<0)
		{
			qtdNeg++;
		}
		else
		{
			if(n>=0)
			{
				qtdPos++;
				somaPos = somaPos + n;//Ou somaPos += n;
			}
		}
	}
	printf("\n");
	printf("A quantidade de numeros negativos foi de %d\n", qtdNeg);
	mediaPos=somaPos/qtdPos;
	printf("A media dos numeros positivos foi de %.1f", mediaPos);
	
}
