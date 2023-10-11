#include <stdio.h>

int main()
{
    int *x, p;
    x = NULL;
    p = 2;
    x = &p;
    p = 14 - *x;

    printf("o endereço que aponta para x é %p e p é %d",x,p);

    return 0;
}