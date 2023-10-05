#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    char login[200];
    char senha[200];
    char senhasalva[200] = "12345";
    char loginsalvo[200] = "Augusto";

    setlocale( LC_ALL, "portuguese");
    printf("Digite seu login: ");
    gets(login);


    printf("Digite sua senha: ");
    gets(senha);

    // string comparation
    if (strcmp(loginsalvo, login) == 0 && strcmp(senhasalva, senha) == 0)
    {
        printf("Seja bem vindo! ");
    }
    else {
        printf("Senha ou login incorreto");
   
    }

    getchar();
    return 0;
}