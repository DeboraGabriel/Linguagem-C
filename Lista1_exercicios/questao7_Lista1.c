/*
QUESTÃO 7

Escreva um algoritmo para calcular o salário semanal de uma pessoa, determinado pelas
condições que seguem: se o número de horas trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contrário, a pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.
*/

#include<stdio.h>
void main()
{
	//Declaração de variaveis
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
