#include <stdio.h>
/*

Variável Estática -> Endereço de memória não pode ser alterado pelo programador
Declaração e Atribuição: "int X = 1;"

Variável Dinâmica -> Endereço pode ser alterado pelo programador
Declaração e Atribuição: "int *X = 1;"

*/

int main()
{
    int *p, x; //*p (dinâmica), x(estática)
    
    p = NULL; //endereço atribuído como "NULO" (inicialização)
    x = 1;
    p = &x; //endereço de p = endereço de x, logo o valor de p = valor de x
    x = 7 + *p; //x recebe 7 mais o valor de p = 7 + 1 = 8

    printf("O endereço de p é %p, o endereço de x é %p e o valor de x é %d\n", p, &x, x);

    return 0;
}