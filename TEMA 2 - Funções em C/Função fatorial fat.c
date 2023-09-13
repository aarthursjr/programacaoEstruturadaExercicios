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

int main()
{
    int A;

    printf("Forneça um número inteiro não negativo\n");
    scanf("%d",&A);
    printf ("O fatorial de %d é %d",A,fat(A));
}