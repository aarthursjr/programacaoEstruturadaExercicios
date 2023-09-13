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

int main()
{
    int A;

    printf("Forneça um número inteiro não negativo\n");
    scanf("%d",&A);
    printf ("A soma de 1 a %d é %d",A,somaDe1aN(A));
}