
#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 2;
    float r = a / b; // mesmo a e b sendo variaveis de tipo int, aqui eu forço que o resultado da divisao seja do tipo float,
    // independente de como elas foram declaradas no inicio.
    printf("O resultado da divisao é %.1f", r);
    return(0);
}