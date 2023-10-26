#include <stdio.h>
#include <string.h>

struct cadastroCliente
{
    char primeiroNome [50];
    int idade;
    float renda;
};

int main()
{
    struct cadastroCliente Cliente1, Cliente2;
    strcpy (Cliente1.primeiroNome, "José");
    Cliente1.idade = 35;
    Cliente1.renda = 5445.35;

    printf("Inserir Primeiro Nome: ");
    scanf("%s", &Cliente2.primeiroNome);
    printf("Inserir Idade: ");
    scanf("%d", &Cliente2.idade);
    printf("Inserir Renda: ");
    scanf("%f", &Cliente2.renda);
    

    printf(" %s, %d, R$%.2f \n", Cliente1.primeiroNome, Cliente1.idade, Cliente1.renda);
    printf(" %s, %d, R$%.2f \n", Cliente2.primeiroNome, Cliente2.idade, Cliente2.renda);

    return 0;
}
