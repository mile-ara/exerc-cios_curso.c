
#include <stdio.h>

int main(void)
{
    char nome[10];
    printf("Qual é o seu nome?");
    scanf("%s", &nome);
    printf("Muito prazer em te conhecer %s", nome);
    return(0);
}