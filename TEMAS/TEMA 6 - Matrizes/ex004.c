#include <stdio.h>

int main()
{
    int i;
    int j;
    int A[3][2]={7,3,1,4,8};
    int B[3][2]={8,1,4,2,3,2};
    int C[3][2];
    int valorMinimo = A[0][0];

    for (i=0;i<=2;i++)
    {
        for (j=0;j<=1;j++)
        {
            C[i][j] = 5 * A[i][j] + 2 * B[i][j];

            if (C[i][j] < valorMinimo){
                valorMinimo = C[i][j];
            }
        }
    }

    printf("Resultado da matriz 5A + 2B:\n");
    for (i = 0; i <= 2; i++) 
    {
        printf("\n");
        for (j = 0; j <= 1; j++)
        {
            printf("%d ", C[i][j]);
        }
    }

    printf("\n\nMenor valor da matriz 5A + 2B: %d\n", valorMinimo);
}