/*
Fa�a um programa que leia um n�mero inteiro positivo N e exiba todos os m�ltiplos de Y inferiores a N, 
onde N e Y s�o fornecidos pelo usu�rio.
Exemplo:
    N : 30
    Y :4
    
    Saida : 0,4,8,12,16,20,24,28
*/

#include<stdio.h>
void main()
{
	//Declara��o de variaveis
	int n,y,i;
	
	//Ler variaveis
	printf("Informe um numero inteiro positivo N: ");
	scanf("%d",&n);
	
	printf("Informe um numero inteiro Y: ");
	scanf("%d",&y);
	printf("\n");
	
	//Exibindo os multiplos de Y inferiores a N
	for(i=0;i<n;i=i+y)
	{
		if(i%y == 0)//Verificando se i � multiplo de y
		{
			printf("%d ", i);
		}
	}	
}
