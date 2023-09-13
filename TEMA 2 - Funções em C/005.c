#include <stdio.h>

int somaDe1aN(int n)
{ 
    int i,soma;
    i=n;
    soma=0;

    while (i>1)
    {
        soma+=i;
        i-=1;
    }
    return soma;
}

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

int fat(int n)
{ 
    int i,fatorial;
    i=n;
    fatorial=1;
    while (i>1)
    {
        fatorial*=i;
        i-=1;
    }
    return fatorial;
}

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
    int A,B,C,resultado;

    printf("Forneça 3 números positivos\n");
    scanf("%d%d%d",&A,&B,&C);
    resultado = somaDe1aN(A) - pot(B, C) + somanum_mvezes(A, B) + fat(C);
    printf ("Resultado da expressão :%d\n ", resultado);
    
}