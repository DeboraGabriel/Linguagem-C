/*
	DATA : 27/03/23   FPR

    LISTA DE EXERC�CIOS -  MATRIZ
    
QUEST�O 05:
Implementar uma fun��o que, dada uma matriz M10�8, gere um vetor V  de tamanho 8, onde cada elemento do vetor consiste na soma dos 
elementos de uma coluna de M. Ou seja, o elemento V[0] consiste na soma dos elementos da primeira coluna de M, o elemento V[1] consiste 
na soma dos elementos da segunda coluna de M, e assim por diante.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 10
#define C 8

//prot�tipos das fun��es
void preencherVetor (int m[L][C], int v[C]);

void preencherMatriz (int m[L][C]);
void exibirMatriz (int m[L][C]);
void exibirVetor (int v[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int matriz[L][C];
	int vetor[C];
	
	//preenchendo a matriz com n�meros aleat�rios
	preencherMatriz (matriz);
	
	//exibindo a matriz
	printf ("Exibindo a matriz:\n\n");
	exibirMatriz (matriz);
	
	//chamando a fun��o
	preencherVetor (matriz, vetor);
	
	//exibindo o vetor
	exibirVetor (vetor, C);
}

//implementa��o das fun��es
void preencherVetor (int m[L][C], int v[C])
{
	//declara��o de vari�veis
	int i, j, soma;
	
	//percorrendo as colunas da matriz
	for (j=0;j<C;j++)
	{
		//zerando a soma para cada nova coluna
		soma = 0;
		
		//percorrendo as linhas da matriz
		for (i=0;i<L;i++)
		{
			soma = soma + m[i][j];
		}
		
		//armazenando no vetor a soma da coluna j
		v[j] = soma;
	}
}

void preencherMatriz (int m[L][C])
{
	//declara��o de vari�veis
	int i, j;

	//garantindo que as sequ�ncias aleat�rias s�o diferentes
	srand (time(NULL));
	
	//percorrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			m[i][j] = rand()%5 + 1;
		}
	}
}

void exibirMatriz (int m[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			printf ("%3d ", m[i][j]);
		}
		
		printf ("\n");
	}
}

void exibirVetor (int v[], int tamanho)
{
	//declara��o de vari�veis
	int i;

	printf ("\nElementos do vetor: ");

	//percorrendo as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
	
	printf ("\n\n");	
}
