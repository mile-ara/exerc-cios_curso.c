
#include <stdio.h>
#include <string.h>

int main(void)
{
    // comparo duas strings, se a s1 for menor que a s2 retorna negativo.
    // se a s1 for maior que a s2, retorna  positivo.
    // se a s1 e a s2 forem iguais retorna zero.
    char s1[20], s2[20];
    int res;
    printf("Digite a primeira string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Digite a segunda string: ");
    fgets(s2, sizeof(s2), stdin);
    res = strcmp(s1, s2);
    printf("Resultado da comparaçao: %s\n", (res > 0) ? "Positivo" : (res < 0) ? "Negativo":"Zero");
    return(0);
}