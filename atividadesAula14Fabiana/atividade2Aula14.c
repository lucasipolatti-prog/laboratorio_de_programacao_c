#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[2][2];

    printf("Digite os 4 números da matriz: ");

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &numeros[i][j]);
        }
    }
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
                printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

    return 0;
}
