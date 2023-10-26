#include <stdio.h>

struct clientes
{
    char primeiroNome[60];
    int idade;
    float renda;
};

int main()
{
    struct clientes lista_clientes[20];
    int i;

    printf("Dê o nome do cliente: ");
    scanf("%s", lista_clientes[i].primeiroNome);
    printf("Dê a idade do cliente: ");
    scanf("%d", lista_clientes[i].idade);
    printf("Dê a renda do cliente: ");
    scanf("%s", lista_clientes[i].renda);
    
    printf(" O nome do quarto cliente é %s, a idade do décimo cliente é %d e a renda do décimo sexto cliente é %f.", lista_clientes[3].primeiroNome, lista_clientes[9].idade, lista_clientes[15].renda );
    return 0;
}
