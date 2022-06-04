/*
QUESTÃO 2
Escrever um algoritmo que obtenha o peso de uma pessoa na Terra e o número de um planeta. 
Ao final, com auxílio da tabela abaixo, calcular o peso desta pessoa no planeta escolhido.

Número                 Planeta                 Gravidade Relativa g
1                      Mercúrio                     0,37
2                      Vênus                        0,88
3                      Marte                        0,38
4                      Júpiter                      2,64
5                      Saturno                      1,15
6                      Urano                        1,17
Para calcular o peso no planeta escolhido, utilize a seguinte fórmula:
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta
*/

#include<stdio.h>

void main()
{
	//Declaração de variaveis
	int num;
	float pesoTerra,pesoPlaneta;
	
	//Leitura de variaveis
	printf("Informe o peso da pessoa no  planeta Terra :");
	scanf("%f",&pesoTerra);
	printf("\n");
	
	printf("Informe o numero do planeta escolhido :");
	scanf("%d",&num);
	printf("\n");
	
	switch(num)
	{
		case 1:pesoPlaneta=(pesoTerra/10)*0.37;
		       break;
		       
		case 2:pesoPlaneta=(pesoTerra/10)*0.88;
		       break;
		       
		case 3:pesoPlaneta=(pesoTerra/10)*0.38;
		       break;
		       
		case 4:pesoPlaneta=(pesoTerra/10)*2.64;
		       break;
		       
		case 5:pesoPlaneta=(pesoTerra/10)*1.15;
		       break;
		       
		case 6:pesoPlaneta=(pesoTerra/10)*1.17;
		       break;
	}
	printf("Seu peso no planeta numero %d seria de %.1f.",num,pesoPlaneta);
	
}
