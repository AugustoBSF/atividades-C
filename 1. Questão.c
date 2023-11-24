#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    // i NOMES
    // j Pesos
    // k Alturas
    // l idade
    int i, j, k, l;
    char nomes[5][200];
    float pesos[5][5];
    float alturas[5][5];
    int idade[5][5];
    int maiorIdade = 0;
    int menorIdade = 0;
    float menorPeso = 0;
    float maiorPeso = 0;
    float maiorAltura = 0;
    float menorAltura = 0;

    char pessoaAlta[200];
    char pessoaBaixa[200];
    char pessoaPesada[200];
    char pessoaLeve[200];
    char pessoaNovinha[200];
    char pessoaVelhinha[200];

    for (i = 0; i < 5; i++)
    {
        printf("Digite seu nome: ");
        gets(nomes[i]);
        for (j = 0; j < 5; j++)
        {
            fflush(stdin);
            printf("\nDigite seu peso: ");
            scanf("%f", &pesos[j]);
            maiorPeso = pesos[i][j] > maiorPeso ? pesos[i][j] : maiorPeso;
            strcpy(pessoaPesada, nomes[i]);
            menorPeso = pesos[i][j] < menorPeso ? pesos[i][j] : menorPeso;
            strcpy(pessoaLeve, nomes[i]);
        }

        for (k = 0; k < 5; k++)
        {
            printf("\nDigite sua altura: ");
            scanf("%f", &alturas[k]);
            maiorAltura = alturas[i][k] > maiorAltura ? alturas[i][k] : maiorAltura;
            strcpy(pessoaAlta, nomes[i]);
            menorAltura = alturas[i][k] < menorAltura ? alturas[i][k] : menorAltura;
            strcpy(pessoaBaixa, nomes[i]);
        }
        for (l = 0; l < 5; l++)
        {
            printf("\nDigite sua idade: ");
            scanf("%f", &idade[l]);
            fflush(stdin);
            maiorIdade = idade[i][l] > maiorPeso ? idade[i][l] : maiorIdade;
            strcpy(pessoaVelhinha, idade[i]);
            menorIdade = idade[i][l] < menorPeso ? idade[i][l] : menorIdade;
            strcpy(pessoaNovinha, idade[i]);
        }
    }

    getchar();
    return 0;
}