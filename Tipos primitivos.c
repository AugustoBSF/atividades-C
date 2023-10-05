#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 17;//inteiro
    float peso = 80.2;//real
    char sexo = 'F';//apenas um caracter
    char nome [200] = "Marta"; //para varios caracteres
    printf("Idade: %i anos.\n", idade);
    printf("Peso: %.5f anos.\n", peso);
    printf("Sexo: %c .\n", sexo);
    printf("Nome: %s .\n", nome);// caracter //%s - string, varias caracteres
    system ("pause"); 
    return 0;
}
