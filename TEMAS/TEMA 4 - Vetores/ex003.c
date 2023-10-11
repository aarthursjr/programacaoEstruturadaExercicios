#include<stdio.h>

int conversao(int decimal, int base)
{
    int a[99];
    int i = 0;

     while (decimal > 0) {
        a[i] = decimal % base;
        decimal = decimal / base;
        i++;
    }

    printf("O número na base %d é: ", base);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", a[j]);
    }
 }

int main()
{
    int decimal,base;

    printf("Entre com o número na base 10\n");
    scanf("%d",&decimal);
    printf("Informe a base para conversão 2, 4 ou 8:\n");
    scanf("%d",&base);

    switch (base)
    {
    case 2:
        conversao(decimal, base);
        break;
    case 4:
        conversao(decimal, base);
        break;
    case 8:
        conversao(decimal, base);
        break;
    default:
        printf("Base inválida. Tente novamente:\n\n");
        main();
        break;
    }
}