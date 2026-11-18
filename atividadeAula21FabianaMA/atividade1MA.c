#include <stdio.h>
#include <string.h>

#define MAX 5

int main(void) {
    char nome[50];
    int matricula;
    int i;
    FILE *arquivo;

    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < MAX; i++) {
        printf("\nFuncionario %d\n", i + 1);

        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';   /* remove o Enter do final */

        printf("Matricula: ");
        scanf("%d", &matricula);
        getchar();                           /* limpa o Enter que sobrou */

        fprintf(arquivo, "%s;%d\n", nome, matricula);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso em funcionarios.txt!\n");

    return 0;
}
