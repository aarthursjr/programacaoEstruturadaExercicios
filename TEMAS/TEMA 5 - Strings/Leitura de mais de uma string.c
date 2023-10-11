#include <stdio.h>

int main()
{
 char nome1[100]; //string nome 1
 char nome2[100];//string nome 2
 char nome3[100]; //string nome 3
 char nome4[100];//string nome 4

printf("Dê o nome 1\n");
scanf(" %[^\n]", nome1); //Dê o nome 1 - colocar espaço antes do %[^\n]
printf("Dê o nome 2\n");
scanf(" %[^\n]", nome2); //Dê o nome 2 - colocar espaço antes do %[^\n]
printf("Dê o nome 3\n");
scanf(" %[^\n]", nome3); //Dê o nome 3 - colocar espaço antes do %[^\n]
printf("Dê o nome 4\n");
scanf(" %[^\n]", nome4); //Dê o nome 4 - colocar espaço antes do %[^\n]

printf("Nome 1 (completo): %s \n",nome1);
printf("Nome 2 (completo): %s \n",nome2);
printf("Nome 3 (completo): %s \n",nome3);
printf("Nome 4 (completo): %s \n",nome4);
}