#include <stdio.h>

int pot(int base, int expoente)
{ 
    if (expoente<1)
        return 1;
    else
        return base*pot(base,expoente-1);
}

int main()
{
    int A,N;

    printf("Dê o número e seu expoente inteiros\n");
    scanf("%d%d",&A,&N);
    printf("O número %d elevado à %d é igual a %d",A,N,pot(A,N));
}