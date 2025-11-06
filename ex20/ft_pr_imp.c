
#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um numero qualquer: ");
    scanf("%i", &n);
    printf("O numero que voce digitou é %s\n", (n % 2 == 0) ?"par":"ímpar");// se o numero for dividido por 2 e tiver o resto 0, ele é um numero par, se nao ele é ímpar
    return(0);
}

/*int main(void)
{
    int n;
    char *sit; // aqui usei um ponteiro para guardar se o numero é par ou ímpar, fica um pouco mais facil de ler.
    printf("Digite um numero qualquer: ");
    scanf("%i", &n);
    sit = (n % 2 == 0) ?"par":"ímpar";
    printf("O numero que voce digitou é %s", sit);
    return(0);
}*/