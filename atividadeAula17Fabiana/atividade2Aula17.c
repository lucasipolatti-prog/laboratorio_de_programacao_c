#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char produto[100];
    char categoria[70];
    char copia[100];
    char mensagem[100];
    char descricao[100];

    printf("Digite o nome do produto: ");
    scanf("%99s", produto);

    printf("A quantidade de caracteres do seu produto é: %zu\n", strlen(produto));

    printf("Digite a categoria do seu produto(HARDWARE ou PERIFÉRICO): ");
    scanf("%69s", categoria);

    if (strcmp(categoria, "HARDWARE") == 0){
        printf("Este é um produto de categoria HARDWARE!\n");
    } else if (strcasecmp(categoria, "PERIFÉRICO") == 0){
        printf("Este é um produto de categoria PERIFÉRICO\n");
    }

    strcpy(copia, produto);
    printf("%s\n", copia);

    strcpy(mensagem, "Produto: ");
    strcat(mensagem, copia);

    strcpy(descricao, "Categoria: ");
    strcat(descricao, categoria);

    printf("\n%s\n", mensagem);
    printf("%s\n", descricao);

    return 0;
}
