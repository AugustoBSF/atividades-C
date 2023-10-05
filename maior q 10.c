#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()

{
    char resultado[200];
    int numero;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um número: ");
    scanf("%d", &numero);
if (numero == 10){
   strcpy(resultado, "igual a 10 \n"); 
}
    else if (numero > 10)
    {
        strcpy(resultado, "maior que 10 \n");
    }
    else
    {
        strcpy(resultado, "menor que 10 \n");
    }
    printf("%s" ,resultado);
system ("pause");
    return 0;
}