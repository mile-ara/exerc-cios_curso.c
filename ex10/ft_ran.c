
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL)); // gera números aleatórios, (time(NULL)) cada vez que o programa roda em um momento diferente, a sequência de números aleatórios muda.
    int nal = rand() % 5 + 1; // gera números aleatorios entre 1 e 5
    int n;
    
    printf("Vou pensar em um numero aleatorio entre 1 e 5. Tente adivinhar!\n");
    printf("Qual é o seu palpite? ");
    scanf("%d", &n);
    printf("Eu pensei no numero %d e voce pensou no %d", nal, n);
    return(0);
}