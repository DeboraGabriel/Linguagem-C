/*
QUESTÃO 5
Escrever um algoritmo que, dada uma quantia em reais, calcule o menor número possível de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que o valor pode ser decomposto.
*/

#include<stdio.h>

void main()
{
	int notas,N100,N50,N20,N10,N5,N2,N1;//variaveis de saída das quantidades de cada valor de nota(100,50,20,10,5,2,1)
	float Q;//variavel de entrada: Quantia digitada pelo usuário
	
	printf("Digite a quantia :");
	scanf("%f", &Q);
	printf("\n");
	
	N100=Q/100;
	Q=Q-N100*100;//Novo Q=Resto
	
	N50=Q/50;
	Q=Q-N50*50;//Novo Q=Resto de Q/50
	
	N20=Q/20;
	Q=Q-N20*20; //Novo Q=Resto de Q/20
	
	N10=Q/10;
	Q=Q-N10*10; //Novo Q=Resto de Q/10
	
	N5=Q/5;
	Q=Q-N5*5;//Novo Q=Resto de Q/5
	
	N2=Q/2;
	Q=Q-N2*2;//Novo Q=Resto de Q/2
	
	N1=Q/1;
	Q=Q-N1*1;//Novo Q=Resto de Q/1
	
	notas=N100+N50+N20+N10+N5+N2+N1;
	
	printf("A quantia pode ser decomposta em  %d notas", notas);
	printf("\nNotas de 100 :%d ",N100);
	printf("\nNotas de 50 :%d ",N50);
	printf("\nNotas de 20 :%d ",N20);
	printf("\nNotas de 10 :%d ",N10);
	printf("\nNotas de 5 :%d ",N5);
	printf("\nNotas de 2 :%d ",N2);
	printf("\nNotas de 1 :%d ",N1);
	
}
