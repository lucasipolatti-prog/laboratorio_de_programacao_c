#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    Funcionario f;
    int i, qtd;
    FILE *arquivo;

    /* Parte 1: cadastrar e acrescentar ao arquivo */
    printf("Quantos funcionarios deseja cadastrar (0 a %d)? ", MAX);
    scanf("%d", &qtd);
    getchar();                               /* limpa o Enter */

    if (qtd < 0 || qtd > MAX) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    if (qtd > 0) {
        arquivo = fopen("funcionarios.txt", "a");   /* "a" = acrescenta no final */
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo para escrita!\n");
            return 1;
        }

        for (i = 0; i < qtd; i++) {
            printf("\nFuncionario %d\n", i + 1);

            printf("Nome: ");
            fgets(f.nome, sizeof(f.nome), stdin);
            f.nome[strcspn(f.nome, "\n")] = '\0';

            printf("Salario: ");
            scanf("%f", &f.salario);

            printf("Horas extras: ");
            scanf("%d", &f.horasExtras);
            getchar();

            fprintf(arquivo, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
        }

        fclose(arquivo);
        printf("\nDados gravados com sucesso!\n");
    }

    /* Parte 2: ler o arquivo e mostrar todos os registros */
    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("\nNenhum funcionario cadastrado ainda.\n");
        return 0;
    }

    printf("\n===== Funcionarios cadastrados =====\n");
    while (fscanf(arquivo, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3) {
        printf("Nome: %s | Salario: R$ %.2f | Horas extras: %d\n",
               f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);

    return 0;
}
