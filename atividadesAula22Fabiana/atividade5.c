#include <stdio.h>

int main() {
    int vetor[5];
    int *ptr = vetor;   // aponta para o primeiro elemento
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
