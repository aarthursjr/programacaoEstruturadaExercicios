#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[100];
    char nome2[100];
    strcpy(nome1, "André");
    strcpy(nome2, "Arthur");

    printf("%s", strcat(nome1,nome2));
    return 0;
}
