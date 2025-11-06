
#include <stdio.h>

int main(void)
{
    int n;

    printf("<<< Positivo ou Negativo >>>\n");
    printf("Me diga um número e eu te direi se\nele é POSITIVO, NEGATIVO ou NULO.\n");
    printf("Digite um número: ");
    scanf("%d", &n);

    if(n > 0) // aqui verifico se o número é positivo
    {
        printf("O número %d é positivo\n", n);
    }
    else if(n < 0) // se o if de cima estiver errado, verifco se o número é negativo
    {
        printf("O número %d é negativo.\n", n);
    }
    else // se o número nao é negativo ou positivo, declaro que será nulo
    {
        printf("O número %d é nulo.\n", n);
    }
    return(0);
}