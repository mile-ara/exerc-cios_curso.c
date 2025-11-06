
#include <stdio.h>

int main(void)
{
    int n1, n2;
    
    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Segundo número: ");
    scanf("%d", &n2);
    
    if(n1 > n2) // verifico se o primeiro número é maior que o segundo
    {
        printf("O maior número é o primeiro %d\n", n1);
    }
    else // Caso contrário, verifico outra possibilidade
    {
        // Condição aninhada: só sera executada se o primeiro if for falso
        if(n1 < n2)
        {
            printf("O maior número é o segundo %d\n", n2);
        }
            else // Então se nenhuma das condições acima forem veradeiras, os números sao iguais
            {
                printf("Os números %d e %d são iguais.\n", n1, n2);
            }
    }
    return(0);
}

// outra possibilidade
/*#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("O maior número é o primeiro: %d\n", n1);
    }
    else if (n1 < n2)
    {
        printf("O maior número é o segundo: %d\n", n2);
    }
    else
    {
        printf("Os números %d e %d são iguais.\n", n1, n2);
    }

    return 0;
}*/
