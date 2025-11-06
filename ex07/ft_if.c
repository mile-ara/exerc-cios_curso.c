
#include <stdio.h>

int main(void)
{
    int n;
    float r;
    printf("Digite um numero inteiro:");
    scanf("%d", &n);
    printf("Digite um numero real:");
    scanf("%f", &r);
    printf("Voce digitou um numero inteiro %d e um numero real %.1f", n, r);
    return(0);
}