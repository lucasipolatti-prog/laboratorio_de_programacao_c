#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    char codigoCurso[10];
    char copia[50];
    char mensagem[100];

    printf("==== IDENTIFICAÇÃO ACADÊMICA ==== \n");

    printf("Digite o seu nome: ");
    scanf("%49s", nome);
    printf("A quantidade de caracteres que tem o seu nome é: %zu\n", strlen(nome));

    printf("Digite o código do seu curso: ");
    scanf("%9s", codigoCurso);

    if (strcmp(codigoCurso, "CC") == 0){
        printf("Você está no curso de Ciência da Computação.\n");
    } else if (strcmp(codigoCurso, "SI") == 0){
        printf("VOcê está mp curso de Sistemas para Informação.\n");
    } else {
        printf("Você não está vinculado em nenhum curso.\n");
    }

    strcpy(copia, nome);
    strcpy(mensagem, "Olá, ");
    strcat(mensagem, copia);

    printf("\n%s\n", mensagem);

    return 0;
}
