/*
	FPR - Professor Leonardo Vianna
	Turma: Noite
	Data: 27/03/2023
	
	Lista de Exercícios (strings)
	
	Questão 01:
	Suponha que não existissem as funções strlen,strcpy, strcat e strcmp. Pede-se, então, a implementação
	de funções que tenham o mesmo objetivo daquelas.
*/

//importação de bibliotecas
#include<stdio.h>
#include<string.h>

//protótipos das funções
int tamanho(char s[]);// função strlen

void main()//Fazer as demais depois
{
	int resp;
	char str[30]="minhamaeeumapeca";
	
	//Chamada da função palindromo
	resp = tamanho("minhamaeeumapeca");
	
	printf("%d",resp);
}

int tamanho(char s[])
{
	int i;
	
	for(i=0;s[i]!='\0';i++);
	return i;
}

//outro modo de fazer a função tamanho
/*
int tamanho(char s[])
{
	int i,cont=0;
	
	for(i=0;s[i]!='\0';i++)
	{
		cont++;
	}
	return cont;
}
*/



