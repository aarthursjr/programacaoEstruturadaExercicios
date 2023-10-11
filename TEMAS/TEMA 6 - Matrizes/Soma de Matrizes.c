#include <stdio.h>

int main()
{
    int i;
    int j;
    int A[3][2]={7,3,1,4,8};
    int B[3][2]={8,1,4,2,3,2};
    int C[3][2];

    for (i=0;i<=2;i++)
    {
    for (j=0;j<=1;j++)
    {
        C[i][j]=A[i][j]+B[i][j];
        }
    }

    for (i=0;i<=2;i++)
    {
        printf("\n");
        for (j=0;j<=1;j++)
        {
            printf("%d ",C[i][j]);
            }
    }
}