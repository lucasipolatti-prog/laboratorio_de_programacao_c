#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dobro (int numero) {
    return numero * 2;
}

int main (void) {
    setlocale(LC_ALL, "Portuguese");

    printf("===== CONTROLE DE ESTOQUE =====\n");
    int valor, resultado;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    resultado = dobro(valor);

    printf("Dobro do valor é: %d", resultado);

    return 0;
}

