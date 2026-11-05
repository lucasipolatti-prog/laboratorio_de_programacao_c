#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maiorPreco (int preco1, int preco2) {
    if (preco1 > preco2) {
        return preco1;
    } else {
        return preco2;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("===== COMPARADOR DE PREÇOS =====\n");
   int preco1, preco2;

    printf("Digite o valor do primeiro preço: ");
    scanf("%d", &preco1);
    printf("Digite o valor do segundo preço: ");
    scanf("%d", &preco2);

    if (preco1 == preco2) {
        printf("Os dois preços são iguais!\n");
    } else {
        printf("O maior preço é: %d", maiorPreco(preco1, preco2));
    }

    return 0;
}


