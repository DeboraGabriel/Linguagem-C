/*
QUESTÃO 3
Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu sexo e
altura, utilizando as seguintes formulas:

 para homens:   (72.7*h)-58
 para mulheres: (62.1*h)-44.7
*/

#include<stdio.h>

void main()
{
	char sexo;//sexo
	float h,peso;//h:altura da pessoa
	
	printf("Digite F para feminino ou M para masculino: ");
	sexo=toupper(sexo);//Estou garantindo que o F e o M são sempre maiusculos
	scanf("%c", &sexo);
	printf("Digite a sua altura: ");
	scanf("%f", &h);
	
	if (sexo=='M')
	{
		peso = ((72.7*h) - 58);
		
	}
	else
	{
			peso = ((62.1*h) - 44.7);
		
	}
	printf("\n");
	printf("O seu peso ideal eh %.1f",peso);
}
