#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int quantidade;
    float valorunitario;
    float precofinal;

    printf("Digite a quantidade de de ma��s:");
    scanf("%d", &quantidade);
    system("Cls|| Clear");

    valorunitario = quantidade < 12 ? 1.30 : 1.0;
    precofinal = quantidade * valorunitario;
    printf("Quantidade de ma��s: %d \n", quantidade);
    printf("Pre�o unit�rio: %.2f \n", valorunitario);
    printf("Pre�o final: R$ %.2f \n", precofinal);

    getchar();
    return 0;
}