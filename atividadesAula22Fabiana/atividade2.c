#include <stdio.h>

int main() {
    int variavel = 20;
    int *ptr = &variavel;

    printf("Valor da variavel: %d\n", variavel);
    printf("Endereco da variavel: %p\n", (void *)&variavel);
    printf("Valor acessado pelo ponteiro: %d\n", *ptr);

    return 0;
}
