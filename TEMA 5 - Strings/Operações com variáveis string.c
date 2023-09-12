#include <stdio.h>
#include <string.h>

int main()
{
	char x[100]; //define o tamanho máximo da string (cabem até 100 caracteres)
	char y[100];
	int z;
    
    printf("Dê o valor da string x\n"); 
    scanf(" %[^\n]", x); //Lê a primeira palavra

 
    strcpy(y,"roberto"); //Valor "roberto" é atribuído a variável y
    z=strcmp(x,y); //O valor da comparação de x com y é atribuído a variável z
    if (z==0) 
        printf ("As strings são iguais\n");
    else
        printf ("As strings são diferentes\n");

    printf ("Concatenando fica %s",strcat(x,y)); //Concatenação das variáveis x e y

}