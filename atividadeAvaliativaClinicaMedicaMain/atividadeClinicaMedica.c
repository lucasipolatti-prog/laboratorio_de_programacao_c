#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 5

int calcularRisco(float dados[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[MAX][100];
    int quantidade;
    float dados[MAX][13];
    int pontos;
    int i;

    for (quantidade = 0; quantidade < 1 || quantidade > MAX; )
    {
        printf("Digite a quantidade de pacientes (1 a %d): ", MAX);
        scanf("%d", &quantidade);
    }

    for (i = 0; i < quantidade; i++)
    {

        printf("\nCadastro do paciente: %d\n", i + 1);

        printf("Digite o seu nome: ");
        scanf(" %99[^\n]", nome[i]);

        printf("Digite sua idade: ");
        scanf("%f", &dados[i][0]);

        printf("Digite sua pressão arterial sistólica (em mmHg): ");
        scanf("%f", &dados[i][1]);

        printf("Tabagismo (1 - SIM / 0 - NÃO): ");
        scanf("%f", &dados[i][2]);

        printf("Diabetes (1 - SIM / 0 - NÃO): ");
        scanf("%f", &dados[i][3]);

        printf("Histórico de doença cardíaca (1 - SIM / 0 - NÃO): ");
        scanf("%f", &dados[i][4]);

        printf("Colesterol LDL: ");
        scanf("%f", &dados[i][5]);

        printf("Peso (kg): ");
        scanf("%f", &dados[i][6]);

        printf("Altura (m): ");
        scanf("%f", &dados[i][7]);

        printf("Sedentarismo (1 - SIM / 0 - NÃO): ");
        scanf("%f", &dados[i][8]);

        printf("Alimentação rica em ultraprocessados (1 - SIM / 0 - NÃO): ");
        scanf("%f", &dados[i][9]);

        printf("Estresse crônico elevado (1 - SIM / 0 - NÃO): ");
        scanf("%f", &dados[i][10]);

        printf("Sono inadequado (1 - SIM / 0 - NÃO): ");
        scanf("%f", &dados[i][11]);

        printf("Sexo biológico masculino (1 - SIM / 0 - NÃO): ");
        scanf("%f", &dados[i][12]);
    }

    printf("\nSISTEMA DE ANÁLISE DE RISCO\n");
    printf("\nQuantidade de pacientes: %d\n", quantidade);

    for (i = 0; i < quantidade; i++)
    {
        printf("Paciente %d: %s\n", i + 1, nome[i]);
    }

    printf("\nRELATÓRIO DE RISCO\n");

    for (i = 0; i < quantidade; i++)
    {

        pontos = calcularRisco(dados[i]);

        printf("\nPaciente: %s (pontos: %d)\n", nome[i], pontos);

        if (pontos <= 4)
        {
            printf("Classificação: Menor de 10%%\n");
        }
        else if (pontos <= 9)
        {
            printf("Classificação: Entre 10%% e 20%%\n");
        }
        else if (pontos <= 14)
        {
            printf("Classificação: Entre 20%% e 30%%\n");
        }
        else if (pontos <= 18)
        {
            printf("Classificação: Entre 30%% e 50%%\n");
        }
        else
        {
            printf("Classificação: Acima de 50%%\n");
        }
    }

    printf("\nFIM DO PROGRAMA\n");

    return 0;
}

int calcularRisco(float dados[])
{

    int pontos = 0;

    if (dados[0] >= 65)  pontos += 3;
    if (dados[1] >= 160) pontos += 3;
    if (dados[2] == 1)   pontos += 3;
    if (dados[3] == 1)   pontos += 2;
    if (dados[4] == 1)   pontos += 2;
    if (dados[5] >= 160) pontos += 2;

    float imc = dados[6] / (dados[7] * dados[7]);
    if (imc >= 30)       pontos += 2;

    if (dados[8] == 1)   pontos += 1;
    if (dados[9] == 1)   pontos += 1;
    if (dados[10] == 1)  pontos += 1;
    if (dados[11] == 1)  pontos += 1;
    if (dados[12] == 1)  pontos += 1;

    return pontos;
}
