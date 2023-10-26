#include <stdio.h>
#include <string.h>

struct cadastroAluno
{
    char nome[50];
    int codigo;
    int idade;
};

int main()
{
    struct cadastroAluno A[20];
    
    for (int i = 0; i < 20; i++)
    {
        printf("Inserir dados aluno %d\n", i + 1);
        printf("Digite nome:\n");
        scanf("%s", A[i].nome);
        printf("Digite o código e idade:\n");
        scanf("%d%d", &A[i].codigo, &A[i].idade);
    }

    for (int i = 0; i < 20; i++)
    {
        printf ( "Aluno %d: %s %d %d \n" , i+1, A[i].nome ,A[i].codigo ,A[i].idade ) ;
    }
    
    return 0;
}
