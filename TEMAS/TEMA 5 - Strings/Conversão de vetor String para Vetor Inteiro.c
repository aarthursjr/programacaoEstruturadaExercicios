#include <stdio.h>

int main()
{
    char cpf[11]; //A string da cpf
    int conversao[11]; //Um vetor que irá guardar cada dígito do CPF como inteiro
    int i;

    printf("Dê o número do CPF\n");
    scanf("%s",cpf); //Armazena o valor de cpf
    for(i=0; i<=10; i++){ //Repete isso 11 vezes
        conversao[i]=cpf[i] - '0'; //Vetor conversao pega os 11 digitos do cpf e os transforma em inteiros
    }
    for(i=0; i<=10; i++){ //Repete isso 11 vezes
        printf("%do digito do CPF é %d\n",i+1,conversao[i]); //Vetor conversao mostra os 11 dígitos de cpf convertidos em inteiros
    }
}