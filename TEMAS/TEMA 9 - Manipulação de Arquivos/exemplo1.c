    /*
    Para DADOS serem acessados posteriormente, eles serão guardados em ARQUIVOS (ou BANCO DE DADOS).

    VANTAGENS: 
    Armazenamento Permanente de dados, Grande quantidade de dados armazenadas, acesso concorrente(várias pessoas podem acessar o mesmo arquivo).

    TIPOS DE ARQUIVOS:
    Arquivos de texto(sequência de caracteres - .txt, .csv, .html, .doc) e arquivos binários (sequência de bits em código de máquina - executáveis: .exe, .zip).

    PONTEIRO PARA ARQUIVO
    Variável Dinâmica (Ponteiro) que vai referenciar um arquivo.

    FILE *nome 

    ex:
    FILE *pont_arq
    pont_arq = fopen ("diretorio/arquivo.txt", "a");

    TIPO DE ARQUIVO
    r (read) : Arquivo somente para leitura.
    w (write) : Arquivo para gravação. Se já existir, o programa sobrecreve o arquivo com os novos dados.
    a (append) : Arquivo para gravação. Se já exisitr, o programa mantém o arquivo existente e adiciona os novos dados gravados.
    */
   
#include <stdio.h>

int main()
{
    FILE *pont_arq; // Criação do arquivo

    pont_arq = fopen("arquivo.txt", "a"); // Abre o arquivo

    fclose (pont_arq); //Fecha o arquivo


    printf("O arquivo foi criado com sucesso.");

    return 0;
}
