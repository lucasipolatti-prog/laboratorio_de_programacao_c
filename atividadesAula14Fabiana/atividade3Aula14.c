#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[3][3];
    int soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o número da posição [%d][%d]: ", i, j);
            scanf("%d", &numeros[i][j]);
            soma += numeros[i][j];
        }
    }

    printf("\nMatriz digitada:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma de todos os elementos: %d\n", soma);

    return 0;
}
