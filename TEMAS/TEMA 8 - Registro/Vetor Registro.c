#include <stdio.h>

struct alunos
{
    char nome[60];
    char CPF[11];
    int telefone;
};

int main()
{
    struct alunos lista_alunos[3];
    int i;

    printf("Dê o nome do aluno: ");
    scanf("%s", lista_alunos[i].nome);
    printf("Dê o CPF do aluno: ");
    scanf("%s", lista_alunos[i].CPF);
    printf("Dê o telefone do aluno: ");
    scanf("%s", lista_alunos[i].telefone);
    
    printf(" O nome do primeiro aluno é %s, o CPF do segundo aluno é %s e o telefone do terceiro aluno é %d", lista_alunos[0].nome, lista_alunos[1].CPF,lista_alunos[2].telefone );
    return 0;
}
