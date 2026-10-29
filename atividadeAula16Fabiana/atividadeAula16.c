#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[100];
    int contador = 0;

    printf("Digite uma palavra qualquer: ");
    scanf("%s", nome);
    for (int i = 0; nome[i] != '\0'; i++){
        contador++;
    }

    printf("%d", contador);

    return 0;

}
