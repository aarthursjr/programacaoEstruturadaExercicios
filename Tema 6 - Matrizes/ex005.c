#include <stdio.h>

int main() {
    float mediasUnidades[2][3]; 
    float mediaUnidade0, mediaUnidade1;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Informe a média da turma %d da unidade %d: ", j, i);
            scanf("%f", &mediasUnidades[i][j]); 
        }
    }

    printf("Matriz de medias das turmas:\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", mediasUnidades[i][j]); 
            if (j == 2) {
                printf("\n");
            }
        }
    }

    mediaUnidade0 = (mediasUnidades[0][0] + mediasUnidades[0][1] + mediasUnidades[0][2]) / 3.0;
    mediaUnidade1 = (mediasUnidades[1][0] + mediasUnidades[1][1] + mediasUnidades[1][2]) / 3.0;
    printf("\nA media das turmas da unidade 0 é %.2f\n", mediaUnidade0);
    printf("\nA media das turmas da unidade 1 é %.2f\n", mediaUnidade1);

    if (mediaUnidade0 > mediaUnidade1)
    {
        printf("\nA média da turmas da Unidade 0 foi maior que a da Unidade 1.\n");
    }
    else if (mediaUnidade1 > mediaUnidade0)
    {
        printf("\nA média das turmas da Unidade 1 foi maior que a da Unidade 0.\n");
    }
    else
    {
        printf("\nA média das turmas das duas Unidades foram iguais.\n");
    }
    printf("\n");
    return 0;
}