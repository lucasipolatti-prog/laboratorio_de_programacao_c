#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numeros[3][4] = {
    {0, 1, 0, 0},
    {1, 1, 0, 1},
    {0, 0, 1, 0}
    };

    // Você definiu estas variáveis, elas podem ser úteis para clareza no código
    int disponivel = 0;
    int ocupado = 1;
    int soma_disponiveis = 0;
    int soma_ocupados = 0;

    // Imprime o mapa de lugares
    printf("Mapa de assentos (0 = Disponível, 1 = Ocupado):\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", numeros[i][j]);

            // A checagem precisa ficar AQUI DENTRO, enquanto passamos por cada lugar!
            // Usamos '==' para comparar. Se for igual a 'disponivel' (que é 0):
            if (numeros[i][j] == disponivel){
                soma_disponiveis += 1; // Adiciona 1 ao nosso contador de vagas
            } else {
                soma_ocupados += 1;
            }
        }
        printf("\n");
    }

    // O resultado final deve ser impresso DEPOIS que o loop passar por toda a matriz
    printf("\nEssa é a quantidade total de lugares disponíveis: %d\n", soma_disponiveis);
        printf("\nEssa é a quantidade total de lugares ocupados: %d\n", soma_ocupados);

    return 0;
}
