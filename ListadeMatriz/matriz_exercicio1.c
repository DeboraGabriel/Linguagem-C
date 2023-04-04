/*

DATA : 27/03/23   FPR

LISTA DE EXERC�CIOS -  MATRIZ  

QUEST�O 01:
Fa�a um fun��o que, dada uma matriz M8�5 de inteiros, gere a matriz Mt, sua transposta

*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declara��o de constantes
#define L 8
#define C 5

//Prot�tipo da fun��o
void transposta (int m[L][C], int mt[C][L]);
void preencherAleatorio(int m[L][C]);
void exibir(int m[L][C]);
void exibirTransp(int m[C][L]);//Isso n�o � legal mais isso vai mudar com o uso de ponteiro.

//Implementando a main
void main()
{
	//declara��o de vari�veis
	int matriz[L][C];
	int transp[C][L];
		
	preencherAleatorio(matriz);
	
	exibir(matriz);
	
	printf("\n");
	
	transposta(matriz, transp);
	
	exibirTransp(transp);
}

//Fun��es

void transposta (int m[L][C], int mt[C][L])
{
	//declara��o de vari�veis
	int i,j;
		
	//preenchendo a matriz transposta
	for(i=0;i<L;i++)
	{
	    for(j=0;j<C;j++)
		{
	        mt[j][i]=m[i][j];
	    }
	}
}

void exibir(int m[L][C])
{
	int i,j;
	
	for(i=0;i<L;i++)
	{
    	for(j=0;j<C;j++)
		{
	        printf("%3d ",m[i][j]);
	    }
	    printf("\n");
	}
}

void preencherAleatorio(int m[L][C])
{
	int i,j;

	srand(time(NULL));
	
	printf("Matriz original:\n");
	for(i=0;i<L;i++)
	{
    	for(j=0;j<C;j++)
		{
           m[i][j] = 1+rand()%100;  //gerar n�meros de 0 a 100
        }
    }
}

void exibirTransp(int m[C][L])
{
	int i,j;
	
	printf("Matriz transposta:\n");
	for(i=0;i<C;i++)
	{
    	for(j=0;j<L;j++)
		{
	        printf("%3d ",m[i][j]);
	    }
	    printf("\n");
	}
}

