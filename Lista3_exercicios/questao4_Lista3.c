/*
Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.
*/

#include<stdio.h>
#define QUANT 5

void main()
{
	//Declaração de variaveis
	float n,somaPos=0,mediaPos;
	int qtdNeg=0,qtdPos=0,i;
	
	for(i=1;i<=QUANT;i++)
	{
		printf("Informe um numero real:");
		scanf("%f",&n);
		
		if(n<0)
		{
			qtdNeg++;
		}
		else
		{
			if(n>0)
			{
				qtdPos++;
				somaPos = somaPos + n;//Ou somaPos += n;
			}
		}
	}
	printf("A quantidade de numeros negativos foi de %d\n", qtdNeg);
	mediaPos=somaPos/qtdPos;
	printf("A media dos numeros positivos foi de %.1f", mediaPos);
	
}
