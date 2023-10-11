#include <stdio.h>

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
    int A,B,C,fatpot;

    printf("Forneça 3 números positivos\n");
    scanf("%d%d%d",&A,&B,&C);
    fatpot=fat(A)+pot(B,C);
    printf ("A soma do fatorial de %d com %d elevado à %d é %d",A,B,C,fatpot);
}