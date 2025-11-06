
#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if(n % 2 == 0) // se o numero for divisel por 2 significa que ele é um número par
    {
        printf("O numero %d é PAR\n"); 
    }
        else
        {
            printf("O número %d é ÍMPAR\n");
        }
    return(0);
}