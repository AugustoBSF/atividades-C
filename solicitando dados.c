#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float peso;
    char sexo;
    float altura;
    char nome [200];  
    // solicitando idade
    printf("Digite sua Idade: ");
    scanf("%d", &idade);
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
   
    fflush(stdin);//limpa cache de input
    printf("Digite seu sexo: ");
    scanf("%c", &sexo);
     
     fflush(stdin);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

   fflush(stdin);

   printf("Digite seu nome: ");
    gets(nome);
    //ou fgets(nome,50, stdin);
    //nome[strcspn(nome,"\n"")] = 0;  
    
    system("cls || clear");
    // exibindo dados para o usuário.
    printf("Idade: %d anos.\n", idade);
    printf("Peso: %.3f anos.\n", peso);
    printf("Sexualidade: %.c .\n", sexo);
    printf("Altura: %.2f metros.\n", altura);
    printf("Nome: %s \n", nome);
    return 0;


}