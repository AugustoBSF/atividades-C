#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18 && idade <= 65)
    {
        printf("Voc� tem a idade permitida pra votar");
    }
    else
    {
        printf("Voc� n�o tem idade permitida de votar");
    }
    getchar ();
    return 0;
}