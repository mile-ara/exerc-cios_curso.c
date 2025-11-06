
#include <stdio.h>
#include <string.h>

int main(void)
{
    char sit[10];
    float media;
    printf("Escreva sua nota: ");
    scanf("%f", &media);
    strcpy(sit, (media >= 7) ?"Aprovado":"Reprovado");
    printf("A situaçao do aluno é %s", sit);
    return(0);
}