#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularFatorial(int n) {
    int resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um número (não negativo, entre 0 e 12): ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12){
        printf("Erro! Número negativo ou número acima do informado!\n");
    } else {
        int resultado = calcularFatorial(numero);
        printf("O fatorial de %d é %d\n", numero, resultado);
    }
    return 0;
}
