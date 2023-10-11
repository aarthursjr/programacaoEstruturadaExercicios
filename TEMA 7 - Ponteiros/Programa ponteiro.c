#include <stdio.h>

int main()
{
    int *p,x;
    
    p = NULL;
    x = 1;
    p = &x;
    x = 7 + *p;

    printf("O endereço que aponta para p é %p e x é %d", p, x);
    
    return 0;
}
