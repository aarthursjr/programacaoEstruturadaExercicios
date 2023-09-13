/*Faça pequenas modificações no Programa da função potência pot que está no AVA e 
mude o nome para somanum_mvezes.
Ele deve fazer soma de um número N, M vezes.
N e M são os parâmetros de entrada (números inteiros)*/

#include <stdio.h>

int pot(int base,int expoente)
{
    int i,pot1;	
    pot1=1;
    for (i=1;i<=expoente;i++)
    pot1*=base;
    return pot1;
}

int main()
{
    int A,B;

    printf("Dê o número e seu expoente inteiros\n");
    scanf("%d%d",&A,&B);
    printf("O número %d elevado à %d é igual a %d",A,B,pot(A,B));
}