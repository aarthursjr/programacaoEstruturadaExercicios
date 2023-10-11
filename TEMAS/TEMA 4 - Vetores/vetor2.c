#include <stdio.h>

int main()
{
    int x[6]={4,7,9};

    printf("A componente x[1]=%d\n",x[1]);
    printf("A componente x[4]=%d\n",x[4]);
    printf("A componente x[5]=%d\n",x[5]);
    printf("O tamanho em memória ocupado pelo vetor x é de %ld bytes", sizeof(x));

}