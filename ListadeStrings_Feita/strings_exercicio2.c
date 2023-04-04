/*
	FPR - Professor Leonardo Vianna
	Turma: Manh�
	Data: 06/04/2022
	
	Lista de Exerc�cios (strings)
	
	Quest�o 02:
	Dada uma string s, desenvolver uma fun��o que determine se s � ou n�o um pal�ndromo.
    Observa��o: uma string s ser� um pal�ndromo quando seus caracteres formarem a mesma sequ�ncia,
	independente se s � percorrida da esquerda para direita ou vice-versa.

*/
//importa��o de bibliotecas
#include<stdio.h>
#include<string.h>

//prot�tipos das fun��es
int palindromo(char s[]);

//Programa principal sendo inicializado pois n�o precisa de um usu�rio para digitar as informa��es
void main()
{
	int resp;
	char str[20]="osso";//Palavras testadas:ava,osso,subinoonubus,Ana(s�o pal�ndromos);casa,amor(n�o pal�ndromos)
	
	//Chamada da fun��o palindromo
	resp=palindromo("osso");
	
	if(resp==1)
	{
		printf("%s eh palindromo.",str);
	}
	else
	{
		printf("%s nao eh palindromo.",str);
	}
}

int palindromo(char s[])
{
	int i,j;
	
	for(i=0,j=(strlen(s)-1);i<j;i++,j--)
	{
		if(s[i] != s[j])
		{ 
		  return 0;
		}
	}
	return 1;
}
