/*
	FPR - Professor Leonardo Vianna
	Turma: Noite
	Data: 27/03/2023
	
	Lista de Exerc�cios (strings)
	
	Quest�o 01:
	Suponha que n�o existissem as fun��es strlen,strcpy, strcat e strcmp. Pede-se, ent�o, a implementa��o
	de fun��es que tenham o mesmo objetivo daquelas.
*/

//importa��o de bibliotecas
#include<stdio.h>
#include<string.h>

//prot�tipos das fun��es
int tamanho(char s[]);// fun��o strlen

void main()//Fazer as demais depois
{
	int resp;
	char str[30]="minhamaeeumapeca";
	
	//Chamada da fun��o palindromo
	resp = tamanho("minhamaeeumapeca");
	
	printf("%d",resp);
}

int tamanho(char s[])
{
	int i;
	
	for(i=0;s[i]!='\0';i++);
	return i;
}

//outro modo de fazer a fun��o tamanho
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



