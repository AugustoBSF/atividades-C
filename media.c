#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float primeiraNota;
    float segundaNota;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNota);
    system("cls || clear");

    media = (primeiraNota + segundaNota) / 2;

    printf("Média: %.1f\n", media);
    if (media >= 7)
    {
        printf("Aprovado!!!");
    }
    else
    {
        printf("Reproved!!!");
    }
    return 0;
}