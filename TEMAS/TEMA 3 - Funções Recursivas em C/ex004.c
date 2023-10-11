#include <stdio.h>

/*Modifique o Programa com fatorial e potência recorrentes , que está no AVA, colocando
além das funções já existentes neste programa, as funções soma_de_1aN e somanum_mvezes.O
programa principal deve ler três números inteiros A,B e C e calcular
soma_de_1aN(A)+pot(B,C)-somanum_mvezes(A,C) + fat(B) e mostrar na tela o resultado*/

int fat(int n)
{ 
    if (n<=1)
        return 1;
    else
        return n*fat(n-1);
}

int pot(int base,int expoente)
{
    if (expoente<1)
        return 1;
    else
        return base*pot(base,expoente-1);
}

int soma_de_1a_N(int n)
{ 
    if (n == 0)
        return 0;
    else
        return n + soma_de_1a_N(n - 1);
}

int somanum_mvezes(int numeroN, int numeroM)
{ 
    if (numeroM<1)
        return 0;
    else
        return numeroN+somanum_mvezes(numeroN,numeroM-1);
}

int main()
{
    int A,B,C,equacao;

    printf("Forneça três números inteiros:\n");
    scanf("%d%d%d",&A,&B,&C);
    equacao=soma_de_1a_N(A)+pot(B,C)-somanum_mvezes(A,C) + fat(B);
    
    printf ("A soma de 1 até %d é %d\n",A,soma_de_1a_N(A));
    printf("O número %d elevado à %d é igual a %d\n",B,C,pot(B,C));
    printf("O número %d somado %d vezes é igual a %d\n",A,C,somanum_mvezes(A,C));
    printf ("O fatorial de %d é %d\n",B,fat(B));
    printf("\nO resultado da equação: %d + %d - %d + %d = %d\n", soma_de_1a_N(A), pot(B, C), somanum_mvezes(A, C), fat(B), equacao);

}