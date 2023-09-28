#include <stdio.h>

int fat(int n)
{ 
    if (n<=1)
        return 1;
    else
        return n*fat(n-1);
}

int pot(int base,int expoente)
{
    if (expoente<1)
        return 1;
    else
        return base*pot(base,expoente-1);
}

int main()
{
    int n,m,fatpot;

    printf("Forneça um número inteiro não negativo e um expoente inteiro positivo\n");
    scanf("%d%d",&n,&m);
    fatpot=pot(n,m)+fat(n);
    printf ("A soma do fatorial de %d com %d elevado à %d é %d",n,n,m,fatpot);
}