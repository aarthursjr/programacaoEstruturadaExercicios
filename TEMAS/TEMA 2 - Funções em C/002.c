#include <stdio.h>

int soma(int x, int y)
{
    int resultado = x + y;
    return resultado;
}

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("A soma de %d e %d é %d", num1, num2, soma(num1, num2));
    return 0;
}
