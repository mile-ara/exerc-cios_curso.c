
#include <stdio.h>

int main (void)
{
    char nome[30];
    int idade;
    float peso;
    printf("Qual é o seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);
    printf("Qual é o seu peso? ");
    scanf("%f", &peso);
    printf("Muito prazer %s.Voce tem %d anos e pesa %.2fkg correto?\n", nome, idade, peso);
    printf("FIM.");
    return(0);
}