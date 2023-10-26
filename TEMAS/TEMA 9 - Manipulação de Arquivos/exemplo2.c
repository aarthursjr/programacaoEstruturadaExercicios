//Exemplo: Abrindo, gravando e fechando arquivo
#include <stdio.h>

int main(void)
{
    FILE *pont_arq; 
    char palavra[20]; 
    pont_arq = fopen("arquivo_palavra.txt", "w");

    if(pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    printf("Escreva uma palavra para testar gravacao de arquivo: ");
    scanf("%s", palavra);

    //usando fprintf para armazenar a string no arquivo
    fprintf(pont_arq, "%s\n", palavra);
    //usando fclose para fechar o arquivo
    fclose(pont_arq);
    printf("Dados gravados com sucesso!");
}