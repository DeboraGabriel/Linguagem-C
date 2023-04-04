/*
	FPR - Professor Leonardo Vianna
	Turma: Manhã
	Data: 06/04/2022
	
	Lista de Exercícios (strings)
	
	Questão 02:
	Dada uma string s, desenvolver uma função que determine se s é ou não um palíndromo.
    Observação: uma string s será um palíndromo quando seus caracteres formarem a mesma sequência,
	independente se s é percorrida da esquerda para direita ou vice-versa.

*/
//importação de bibliotecas
#include<stdio.h>
#include<string.h>

//protótipos das funções
int palindromo(char s[]);

//Programa principal sendo inicializado pois não precisa de um usuário para digitar as informações
void main()
{
	int resp;
	char str[20]="osso";//Palavras testadas:ava,osso,subinoonubus,Ana(são palíndromos);casa,amor(não palíndromos)
	
	//Chamada da função palindromo
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
