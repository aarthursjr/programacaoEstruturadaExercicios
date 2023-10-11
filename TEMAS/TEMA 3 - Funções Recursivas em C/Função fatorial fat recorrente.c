#include <stdio.h>

int fat(int n)
{ 
    if (n==0)
        return 1;
    else
        return n*fat(n-1);
}

int main()
{
    int A;

    printf("Forneça um número inteiro não negativo\n");
    scanf("%d",&A);
    printf ("O fatorial de %d é %d",A,fat(A));
}