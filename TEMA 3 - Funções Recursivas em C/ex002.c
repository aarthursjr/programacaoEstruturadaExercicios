#include <stdio.h>

int soma_de_1a_N(int n)
{ 
    if (n==0)
        return 0;
    else
        return n + soma_de_1a_N(n-1);
}

int main()
{
    int A;

    printf("Forneça um número inteiro não negativo\n");
    scanf("%d",&A);
    printf ("A soma de 1 até %d é %d",A,soma_de_1a_N(A));
    return 0;
}