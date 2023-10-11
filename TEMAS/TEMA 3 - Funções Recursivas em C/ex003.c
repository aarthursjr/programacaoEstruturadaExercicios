#include <stdio.h>

int somanum_mvezes(int numeroN, int numeroM)
{ 
    if (numeroM<1)
        return 0;
    else
        return numeroN+somanum_mvezes(numeroN,numeroM-1);
}

int main()
{
    int A,N;

    printf("Informe dois números:\n");
    scanf("%d%d",&A,&N);
    printf("O número %d somado %d vezes é igual a %d",A,N,somanum_mvezes(A,N));

    return 0;
}