#include <stdio.h>

int main()
{

    char palavra[100];
        
    printf("Digite uma palavra: \n");
    scanf("%99[^\n]", palavra);
    printf("%s", palavra);

    return 0;
}