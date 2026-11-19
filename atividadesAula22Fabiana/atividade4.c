#include <stdio.h>

void dobrar(int *p) {
    *p = *p * 2;
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("Resultado apos dobrar: %d\n", numero);

    return 0;
}
