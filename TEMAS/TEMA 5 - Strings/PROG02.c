#include <string.h>
#include <stdio.h>

int main()
{
    char palavra1[100];
    char palavra2[100];
    strcpy(palavra1, "Paz");
    strcpy(palavra2, "Amor");
    printf("%d", strcmp(palavra1, palavra2));
    return 0;
}
