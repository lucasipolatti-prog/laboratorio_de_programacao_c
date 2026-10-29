#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    char perfil[50];
    char copia[30];
    char mensagem[100];

    printf("Digite seu primeiro nome: ");
    scanf("%29s", nome);
    printf("A quantidade de caracteres do seu nome é: %zu\n", strlen(nome));

    printf("Digite o seu perfil: ");
    scanf("%49s", perfil);
    if (strcmp(perfil, "ADMIN") == 0){
        printf("Você está no perfil de administrador.\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Você está no perfil comum.\n");
    } else {
        printf("Você não está em nenhuma perfil.\n");
    }

    strcpy(copia, nome);
    strcpy(mensagem, "Bem-vindo(a), ");
    strcat(mensagem, copia);
    strcat(mensagem, "!\n");

    printf("%s\n", mensagem);
    printf("Cadastro realizado com sucesso!");


    return 0;

}
