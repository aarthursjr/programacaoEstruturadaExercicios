#include <stdio.h>

/*Faça pequenas modificações no Programa da função potência pot que está no AVA e 
mude o nome para somanum_mvezes.
Ele deve fazer soma de um número N, M vezes.
N e M são os parâmetros de entrada (números inteiros)*/

int somanum_mvezes(int n,int m)
{
    int i,cont;	
    cont=0;
    for (i=1;i<=m;i++)
    {
        cont+=n;
    }
    return cont;
}

int main()
{
    int A,B;

    printf("Digite dois números inteiros\n");
    scanf("%d%d",&A,&B);
    printf("A soma de %d vezes o número %d é igual a %d",A,B,somanum_mvezes(A,B));
}