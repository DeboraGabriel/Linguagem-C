/*
QUEST�O 7

Escreva um algoritmo para calcular o sal�rio semanal de uma pessoa, determinado pelas
condi��es que seguem: se o n�mero de horas trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contr�rio, a pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.
*/

#include<stdio.h>
void main()
{
	//Declara��o de variaveis
	int horas;
	float salarioHora,salarioRecebido;
	
	//Leitura das variaves
	printf("Digite as horas trabalhadas :");
	scanf("%d", &horas);
	printf("Digite o valor do salario_hora :");
	scanf("%f", &salarioHora);
	printf("\n");
	
	if (horas <= 40)
	{
		printf("Seu salario semanal eh  %.2f reais.",salarioRecebido = horas*salarioHora);
	}
	else
	{
		printf("Seu salario semanal eh %.2f reais.",salarioRecebido=(horas-40)*1.5*salarioHora + 40*salarioHora);
	}
}
