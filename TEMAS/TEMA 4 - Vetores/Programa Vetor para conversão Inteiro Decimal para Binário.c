#include<stdio.h>

int main()
{
    int a[10];
    int i,j,resto,quociente,decimal;

    printf ("Entre com o número na base 10\n");
    scanf("%d",&decimal);
    i=-1;
    do
    {
        i=i+1;
        quociente=decimal/2;
        resto=decimal%2;
        a[i]=resto;
        decimal=quociente;
    }
    while (quociente!=0);

    printf (" O binário do número é ");

    for (j=i;j>=0;j--)
        printf("%d",a[j]);

}